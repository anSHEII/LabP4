#include "../include/DTFecha.h"
#include <string>
#include <sstream>

// Constructor
DTFecha::DTFecha(int dia, int mes, int año) {
this->dia = dia;
this->mes = mes;
this->anio = año;
}

// Getters
int DTFecha::getDia() {
    return this->dia;
}

int DTFecha::getMes() {
    return this->mes;
}

int DTFecha::getAnio() {
    return this->anio;
}

//Operaciones
bool DTFecha::operator>=(const DTFecha& fecha){
    if (this->anio > fecha.anio) {
        return true;
    } else if (this->anio == fecha.anio) {
        if (this->mes > fecha.mes) {
            return true;
        } else if (this->mes == fecha.mes) {
            if (this->dia >= fecha.dia) {
                return true;
            }
        }
    }
    return false;
}
bool DTFecha::operator<=(const DTFecha& fecha){
    if (this->anio < fecha.anio) {
        return true;
    } else if (this->anio == fecha.anio) {
        if (this->mes < fecha.mes) {
            return true;
        } else if (this->mes == fecha.mes) {
            if (this->dia <= fecha.dia) {
                return true;
            }
        }
    }
    return false;
}

std::string DTFecha::toString() const{
    std::ostringstream oss;
    oss << dia << "/" << mes << "/" << anio;
    return oss.str();
}

// Destructor
DTFecha::~DTFecha() {}