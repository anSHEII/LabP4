#ifndef LIBRO_H
#define LIBRO_H
#include "string"
#include "Publicacion.h"
#include <set>

using namespace std;
class Libro : public Publicacion {
    private:
    string editorial;
    set<string> PalabrasDestacadas;

    public:
    Libro(string DOI,string titulo,DTFecha* fecha, string editorial, set<string> PalabrasDestacadas);
    bool contienePalabra(string);
};
#endif