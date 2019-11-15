#include "Televisor.h"
#include "Electrodomestico.h"
#include<string>
using namespace std;

Televisor::Televisor(string modelo_,string anio_,string resolucion_,string tamanio_):
    Electrodomestico(modelo_,anio_),resolucion(resolucion_),tamanio(tamanio_){}


Televisor::~Televisor()
{
    //dtor
}

string Televisor :: GetResolucion(){return resolucion;}
string Televisor :: GetTamanio(){return tamanio;}
