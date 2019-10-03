#include <iostream>
#include "Punto.h"
#include "Vector.h"

using namespace std;




int main()
{
    //Punto p;
   // p.imprimir();
    Vector q;
    q.modificarIni(0,0);
    q.modificarFin(3,4);
    q.imprimir();
    //q.modulo();

    cout<<endl<<"Modulo: "<<q.modulo();
    return 0;
}
