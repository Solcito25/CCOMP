#include "Electrodomestico.h"
#include "Licuadora.h"
#include<string>
using namespace std;

Electrodomestico::Electrodomestico(string modelo, string anio)
{
   this ->modelo=modelo;
   this->anio=anio;
}

Electrodomestico::~Electrodomestico()
{
    //dtor
}
string Electrodomestico:: getModelo(){return modelo;}
string Electrodomestico:: getAnio(){return anio;}
