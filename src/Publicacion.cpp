#include "../include/Publicacion.h"


//Publicacion::Publicacion(): fecha(), titulo(""),DOI("") {

//}

Publicacion :: Publicacion(string DOI, string titulo, DTFecha* fecha){
    this->DOI=DOI;
    this->titulo=titulo;
    this->fecha=fecha;
    vector<Investigador*> v;
    this->autores = v;
    //his->autores= vector<Investigador*> ();
    
}

DTRefer* Publicacion::getDT() {
    set<string> aux;
    if(!autores.empty()){
        for(vector<Investigador*> :: iterator it = autores.begin(); it != autores.end(); it++){
            aux.insert((*it)->getNombre());
        }
    }
    return new DTRefer(this->DOI,this->titulo,this->fecha, aux);
}

bool Publicacion::contienePalabra(string ) {  //Se define en ArticuloRevista, Libro y PaginaWeb
    return false;
}
DTFecha* Publicacion :: getFecha(){
    return this->fecha;
}
string Publicacion :: getDoi(){
    return this->DOI;
}

vector<Investigador*> Publicacion:: getAutores(){
    return this->autores;
}
void Publicacion :: AgregarAutor(Investigador* i){
    this->autores.push_back(i);
}

// Destructor
Publicacion::~Publicacion(){
    for (vector<Investigador *>::iterator it = autores.begin(); it != autores.end(); it++){
        (*it)->deleteRelacion(this);
    }
    autores.clear();
    delete this->fecha;
};
