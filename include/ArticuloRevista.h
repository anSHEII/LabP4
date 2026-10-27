#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include <string>
#include "Publicacion.h"

using namespace std;

class ArticuloRevista : public Publicacion {  
    private:
        string revista;
        string extracto;
    public:
        ArticuloRevista(string DOI, string titulo, DTFecha* fecha, string revista, string extracto);
        bool contienePalabra(string);
};

#endif