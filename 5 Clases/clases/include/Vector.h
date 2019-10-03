#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
    public:
        Punto ini, fin;
        Vector();
        Vector(Punto, Punto);
        void imprimir();
        void modificarIni(double nx, double ny);
        void modificarFin(double nx, double ny);
        double modulo();
};

#endif // VECTOR_H
