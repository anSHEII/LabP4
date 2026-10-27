#ifndef DTFECHA_H
#define DTFECHA_H
#include <string>
using namespace std;
class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    public:
        // Constructor
        //DTFecha(); // Necesario para DTRefer.cpp
        DTFecha(int dia, int mes, int anio);
        // Getters
        int getDia();
        int getMes();
        int getAnio();

        // Operaciones
        bool operator>=(const DTFecha&);
        bool operator<=(const DTFecha&);

        //funciones
        string toString() const;

        // Destructor
        ~DTFecha();
};
#endif