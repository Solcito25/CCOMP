#ifndef ARRAYPOLYGONS_H
#define ARRAYPOLYGONS_H
#include "Polygon.h"

class ArrayPolygons
{
    public:
        ArrayPolygons();
        ArrayPolygons(Polygon a[],int s);
        ~ArrayPolygons();
        ArrayPolygons(ArrayPolygons &o);
        void insertarfinal(Polygon d);
        void insertar(Polygon d,int pos);
        void redimensionar(int tam);
        void eliminar();

    protected:

    private:
        Polygon *arr;
        int sizes;
        int pos;
        int tam;
};

#endif // ARRAYPOLYGONS_H
