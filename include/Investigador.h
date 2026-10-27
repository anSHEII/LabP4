#ifndef INVESTIGADOR
#define INVESTIGADOR
#include <string>
#include <vector>
#include <set>
#include <map>
#include <vector>
#include "DTFecha.h"
using namespace std;
class Publicacion;

class Investigador{
private:
    string ORCID;
    string nombre;
    string institucion;
    vector <Publicacion*> publicaciones;

public:
    string toString();
    string getNombre();
    void deleteRelacion(Publicacion* publicacion);
    void agregarPublicaciones(Publicacion* p);
    set<string> listarPublicaciones(DTFecha desde, string palabras);

    Investigador(string ORCID, string nombre, string institucion);
    ~Investigador();
};




#endif