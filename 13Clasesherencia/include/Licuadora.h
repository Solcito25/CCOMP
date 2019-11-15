#ifndef LICUADORA_H
#define LICUADORA_H
#include<string>
#include "Electrodomestico.h"
using namespace std;

class Licuadora : public Electrodomestico
{
    public:
        Licuadora(string modelo_,string anio_,string motorPotencia_,string tipoEnvase_);
        virtual ~Licuadora();
        string GetMotor();
        string GetEnvase();
    protected:
        string motorPotencia;
        string tipoEnvase;
    private:

};

#endif // LICUADORA_H
