#include "../include/PaginaWeb.h"

bool PaginaWeb::contienePalabra(string s) {
    return contenidoExtraido.find(s) != string::npos;
}
PaginaWeb:: PaginaWeb(string DOI, string titulo, DTFecha* fecha, string url, string contenidoExtraido ): Publicacion(DOI,titulo,fecha){
    this->url=url;
    this->contenidoExtraido=contenidoExtraido;
}
