#ifndef PAGINAWEB
#define PAGINAWEB

#include "string"
#include "Publicacion.h"
using namespace std;

class PaginaWeb : public Publicacion {
    private:
    string url;
    string contenidoExtraido;
    public:
    bool contienePalabra(string);
    PaginaWeb(string DOI, string titulo, DTFecha* fecha, string url, string contenidoExtraido);
};
#endif
