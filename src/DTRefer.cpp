#include "../include/DTRefer.h"
#include <iostream>
#include <string>

DTRefer::DTRefer(string DOI, string titulo, DTFecha* fecha, set<string> autores)
{
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}

string DTRefer::getDOI()
{
    return DOI;
}

string DTRefer::getTitulo()
{
    return titulo;
}

DTFecha* DTRefer::getFecha()
{
    return this->fecha;
}

set<string> DTRefer::getAutores()
{
    return autores;
}

bool operator==(const DTRefer &refer1, const DTRefer &refer2)
{
    return (refer1.DOI == refer2.DOI);
}


ostream& operator<<(ostream &os, const DTRefer &refer)
{
    os << refer.DOI << "->" << refer.titulo << "(" << refer.fecha->toString() << ")/";
    if(!refer.autores.empty()){
        set<string>::iterator it = refer.autores.begin();
        set<string>::iterator last = refer.autores.end();
        --last;
        while (it != refer.autores.end()) {
            os << *it;
            if (it != last) {
                os << ",";
            }
            ++it;
        }
    }
    os <<endl;
    return os;
}


DTRefer::~DTRefer() {
    autores.clear();
}