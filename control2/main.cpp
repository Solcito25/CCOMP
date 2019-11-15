#include <iostream>
#include "ArrayPolygons.h"
#include "Polygon.h"
using namespace std;

int main()
{
    Polygon a(5,6);
    Polygon b(5,6);
    Polygon c(5,6);
    Polygon d(5,6);
    Polygon arr[2]={a,b};
    ArrayPolygons e(arr,2);
    e.redimensionar(4);
    e.insertarfinal(c);
    e.insertarfinal(d);
    return 0;
}
