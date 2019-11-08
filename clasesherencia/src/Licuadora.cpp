#include "Licuadora.h"
#include "Electrodomestico.h"
Licuadora::Licuadora(string modelo_,string anio_,string motorPotencia_,string tipoEnvase_):
    Electrodomestico(modelo_,anio_),motorPotencia(motorPotencia_),tipoEnvase(tipoEnvase_){}

Licuadora::~Licuadora()
{
    //dtor
}

string Licuadora :: GetMotor(){return motorPotencia;}
string Licuadora :: GetEnvase(){return tipoEnvase;}
