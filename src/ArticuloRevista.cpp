#include "../include/ArticuloRevista.h"


bool ArticuloRevista::contienePalabra(string s) {
    return extracto.find(s) != string::npos;
};
ArticuloRevista ::ArticuloRevista(string DOI, string titulo, DTFecha* fecha, string revista, string extracto) : Publicacion(DOI,titulo,fecha){
    this->extracto= extracto;
    this->revista= revista;
}