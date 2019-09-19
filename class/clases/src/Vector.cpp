#include <iostream>
#include "Vector.h"
#include<math.h>

using namespace std;
Vector::Vector()
{

}
//Vector :: Vector(Punto a, Punto b){
//ini=a;
//fin=b

void Vector::modificarIni(double nx,double ny){
   ini.modificar(nx,ny);

}


void Vector::modificarFin(double nx, double ny){
 fin.modificar(nx,ny);
}


void Vector::imprimir(){
 ini.imprimir();
 cout<<"->";
 fin.imprimir();


}

double Vector:: modulo(){
double c= fin.x -ini.x;
double d= fin.y -ini.y;
double m=sqrt(pow(c,2)+pow(d,2));
return m;
}
