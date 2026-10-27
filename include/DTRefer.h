#ifndef DTREFER
#define DTREFER

#include "DTFecha.h"
#include <set>
#include <string> 
using namespace std;
class DTRefer {
    private:
        string DOI, titulo;
        DTFecha* fecha;
        set<string> autores;
    public:
        //Constructor
        DTRefer(string DOI, string titulo, DTFecha* fecha, set<string> autores);

        //Getters
        string getDOI();
        string getTitulo();
        DTFecha* getFecha();
        set<string> getAutores();

        //Operaciones
        friend bool operator==(const DTRefer& refer1, const DTRefer& refer2);
        friend ostream& operator<<(ostream&, const DTRefer&);
        
        // Destructor
        ~DTRefer();
};
#endif