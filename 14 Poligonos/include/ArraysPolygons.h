#ifndef ARRAYSPOLYGONS_H
#define ARRAYSPOLYGONS_H
#include "Polygon.h"

class ArraysPolygons
{
    public:
        ArraysPolygons();
        ArraysPolygons(Polygon a[],int s);
        ~ArraysPolygons();
        ArraysPolygons(ArraysPolygons &o);
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
