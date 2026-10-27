#ifndef PUBLICACION_H
#define PUBLICACION_H
#include <string>
#include "DTFecha.h"
#include "DTRefer.h"
#include <map>
#include "Investigador.h"

using namespace std;

class Publicacion {
    private:
        string DOI;
        string titulo;
        DTFecha* fecha;
        
        vector<Investigador*> autores;
    public:
        Publicacion(string DOI, string titulo, DTFecha* fecha);


        // Metodos
        DTRefer* getDT();
        DTFecha* getFecha();
        vector<Investigador*> getAutores();
        string getDoi();
        void AgregarAutor(Investigador* i);
        virtual bool contienePalabra(string palabra ) = 0; // Abstracto
        virtual ~Publicacion();
        
};
#endif