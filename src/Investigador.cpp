#include "../include/Investigador.h"
#include "../include/Publicacion.h"
#include <iostream>
#include <algorithm>

Investigador :: Investigador(string ORCID, string nombre, string institucion)
    : ORCID(ORCID), nombre(nombre), institucion(institucion) {
        vector<Publicacion*> p;
        publicaciones = p;
    };


string Investigador :: toString(){
    return ORCID + "->" + nombre + "/" + institucion ;  

}
string Investigador:: getNombre(){
    return this->nombre;
}

void Investigador :: agregarPublicaciones(Publicacion* p){
    this->publicaciones.push_back(p);
    p->AgregarAutor(this);
}

void Investigador ::deleteRelacion(Publicacion* publicacion){

    if(!publicaciones.empty()){
        for (vector <Publicacion*> :: iterator it = publicaciones.begin(); it != publicaciones.end(); it++){
            if((*it)->getDoi() == publicacion->getDoi()){
                publicaciones.erase(it);
                break; 
            }   
        }
    }
}


set<string> Investigador :: listarPublicaciones(DTFecha desde, string palabra){//me parece que el desde no puede ser puntero, por como nos dan listar publicaciones en la letra
    set<string> aux;
    for(vector<Publicacion*> :: iterator it = publicaciones.begin(); it != publicaciones.end(); it++){
        DTFecha* fechaAux = (*it)->getFecha();
        if (*fechaAux >= desde){
            if ((*it)->contienePalabra(palabra)) {
                aux.insert(((*it)->getDoi()));
            }
        }
    }
    return aux;
}

Investigador::~Investigador(){

}