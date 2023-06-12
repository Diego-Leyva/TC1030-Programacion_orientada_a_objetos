#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include "Pelicula.hpp"
#include "Episodio.hpp"
#include "Serie.hpp"
#include "ServicioStreaming.hpp"

// Estructura para los datos que se van a extraer del CSV
struct DatosSerie {
    std::string servicio;
    std::string nombre;
    std::string episodio;
    std::string ID;
    std::string genero;
    int temporada;
    int duracion;
    int numero;
    float calificacion;
};

struct DatosPelicula {
    std::string servicio;
    std::string nombre;
    std::string ID;
    std::string genero;
    int duracion;
    float calificacion;
};

int main() {

    // Declarando los servicios de streaming
    ServicioStreaming Disney("Disney");
    ServicioStreaming Netflix("Netflix");
    ServicioStreaming HBO("HBO");
    ServicioStreaming Crunchyroll("Crunchyroll");

    /////////////////////// Cargando los datos ///////////////////////
    std::vector<DatosSerie> datos;
    std::vector<DatosPelicula> datosPelicula;
    std::ifstream csvfile;

    std::unordered_map<std::string, std::vector<Episodio>> seriesDisney;
    std::unordered_map<std::string, std::vector<Episodio>> seriesNetflix;
    std::unordered_map<std::string, std::vector<Episodio>> seriesHBO;
    std::unordered_map<std::string, std::vector<Episodio>> seriesCrunchyroll;

    csvfile.open(std::string(std::filesystem::current_path()) + "/src/series.csv");
    std::string line = "";
    std::string auxLine = "";
    while(getline(csvfile, line)) {
        DatosSerie dato;
        std::stringstream inputString(line);

        getline(inputString, dato.servicio, ',');
        getline(inputString, dato.nombre, ',');
        getline(inputString, dato.episodio, ',');

        getline(inputString, auxLine, ',');
        dato.temporada = std::stoi(auxLine);
        
        getline(inputString, auxLine, ',');
        dato.duracion = std::stoi(auxLine);

        getline(inputString, auxLine, ',');
        dato.calificacion = std::stof(auxLine);

        getline(inputString, auxLine, ',');
        dato.numero = std::stoi(auxLine);

        getline(inputString, dato.ID, ',');
        getline(inputString, dato.genero, ',');

        datos.push_back(dato);
        line = "";
        auxLine = "";
    }
    csvfile.close();

    csvfile.open(std::string(std::filesystem::current_path()) + "/src/peliculas.csv");
    while(getline(csvfile, line)) {
        DatosPelicula dato;
        std::stringstream inputString(line);

        getline(inputString, dato.servicio, ',');
        getline(inputString, dato.nombre, ',');
        getline(inputString, dato.ID, ',');

        getline(inputString, auxLine, ',');
        dato.duracion = std::stoi(auxLine);

        getline(inputString, auxLine, ',');
        dato.calificacion = std::stof(auxLine);

        getline(inputString, dato.genero, ',');

        datosPelicula.push_back(dato);
        line = "";
        auxLine = "";
    }

    for(int i = 0; i < datos.size(); i++) {
        if(datos[i].servicio == "Disney") {
            Episodio ep(datos[i].episodio, datos[i].calificacion, datos[i].duracion, datos[i].temporada, datos[i].genero, datos[i].ID);
            seriesDisney[datos[i].nombre].push_back(ep);
        }

        if(datos[i].servicio == "Netflix") {
            Episodio ep(datos[i].episodio, datos[i].calificacion, datos[i].duracion, datos[i].temporada, datos[i].genero, datos[i].ID);
            seriesNetflix[datos[i].nombre].push_back(ep);
        }

        if(datos[i].servicio == "HBO") {
            Episodio ep(datos[i].episodio, datos[i].calificacion, datos[i].duracion, datos[i].temporada, datos[i].genero, datos[i].ID);
            seriesHBO[datos[i].nombre].push_back(ep);
        }

        if(datos[i].servicio == "Crunchyroll") {
            Episodio ep(datos[i].episodio, datos[i].calificacion, datos[i].duracion, datos[i].temporada, datos[i].genero, datos[i].ID);
            seriesCrunchyroll[datos[i].nombre].push_back(ep);
        }
    }

    for(int i = 0; i < datosPelicula.size(); i++) {
        if(datosPelicula[i].servicio == "Disney") {
            Pelicula p(datosPelicula[i].nombre, datosPelicula[i].genero, datosPelicula[i].duracion, datosPelicula[i].calificacion, datosPelicula[i].ID);
            Disney.addPelicula(p);
        }

        if(datosPelicula[i].servicio == "Netflix") {
            Pelicula p(datosPelicula[i].nombre, datosPelicula[i].genero, datosPelicula[i].duracion, datosPelicula[i].calificacion, datosPelicula[i].ID);
            Netflix.addPelicula(p);
        }

        if(datosPelicula[i].servicio == "HBO") {
            Pelicula p(datosPelicula[i].nombre, datosPelicula[i].genero, datosPelicula[i].duracion, datosPelicula[i].calificacion, datosPelicula[i].ID);
            HBO.addPelicula(p);
        }

        if(datosPelicula[i].servicio == "Crunchyroll") {
            Pelicula p(datosPelicula[i].nombre, datosPelicula[i].genero, datosPelicula[i].duracion, datosPelicula[i].calificacion, datosPelicula[i].ID);
            Crunchyroll.addPelicula(p);
        }
    }

    for(auto item: seriesDisney) {
        Serie s(std::string(item.first), item.second[0].getGenero(), item.second.back().getTemporada(), item.second);
        Disney.addSerie(s);
    }

    for(auto item: seriesNetflix) {
        Serie s(std::string(item.first), item.second[0].getGenero(), item.second.back().getTemporada(), item.second);
        Netflix.addSerie(s);
    }

    for(auto item: seriesHBO) {
        Serie s(std::string(item.first), item.second[0].getGenero(), item.second.back().getTemporada(), item.second);
        HBO.addSerie(s);
    }

    for(auto item: seriesCrunchyroll) {
        Serie s(std::string(item.first), item.second[0].getGenero(), item.second.back().getTemporada(), item.second);
        Crunchyroll.addSerie(s);
    }

    //////////////////////////////////////////////////////////////////
    int sel;
    std::cout << "Seleccione una opcion: " << std::endl;
    std::cout << "1.Peliculas" << std::endl;
    std::cout << "2.Series" << std::endl;
    std::cin >> sel;

    if (sel == 2) {
        std::cout << "Disney Plus" << std::endl;
        std::cout << Disney.getMenuSeries() << std::endl;
        std::cout << "Netflix" << std::endl;
        std::cout << Netflix.getMenuSeries() << std::endl;
        std::cout << "HBO" << std::endl;
        std::cout << HBO.getMenuSeries() << std::endl;
        std::cout << "Crunhyroll" << std::endl;
        std::cout << Crunchyroll.getMenuSeries() << std::endl;
    }

    else if (sel == 1) {
        std::cout << "Disney Plus" << std::endl;
        std::cout << Disney.getMenuPeliculas() << std::endl;
        std::cout << "Netflix" << std::endl;
        std::cout << Netflix.getMenuPeliculas() << std::endl;
        std::cout << "HBO" << std::endl;
        std::cout << HBO.getMenuPeliculas() << std::endl;
        std::cout << "Crunhyroll" << std::endl;
        std::cout << Crunchyroll.getMenuPeliculas() << std::endl;
    }

    else {
        std::cout << "Invalido" << std::endl;
    }
    return 0;
}