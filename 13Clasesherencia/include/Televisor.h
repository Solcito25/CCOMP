#ifndef TELEVISOR_H
#define TELEVISOR_H
#include<string>
#include "Electrodomestico.h"
using namespace std;

class Televisor :public Electrodomestico
{
    public:
        Televisor(string modelo_,string anio_,string resolucion_,string tamanio_);
        string GetResolucion();
        string GetTamanio();
        virtual ~Televisor();

    protected:

    private:
        string resolucion;
        string tamanio;
};

#endif // TELEVISOR_H
