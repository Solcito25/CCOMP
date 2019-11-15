#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H
#include<string>
using namespace std;

class Electrodomestico
{
    public:
        Electrodomestico();
        Electrodomestico(string modelo, string anio);
        string getModelo();
        string getAnio();

        virtual ~Electrodomestico();

    protected:

    private:
        string modelo;
        string anio;
};

#endif // ELECTRODOMESTICO_H
