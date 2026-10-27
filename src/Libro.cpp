#include "../include/Libro.h"

Libro:: Libro(string DOI,string titulo,DTFecha* fecha, string editorial, set<string> PalabrasDestacadas): Publicacion(DOI, titulo, fecha){
    this->editorial = editorial;
    this->PalabrasDestacadas = PalabrasDestacadas;
}

bool Libro::contienePalabra(string palabra) {
    return PalabrasDestacadas.find(palabra) != PalabrasDestacadas.end(); // si no encuentra la palabra find devuelve .end()
}