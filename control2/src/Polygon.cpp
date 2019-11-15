#include "Polygon.h"
#include <iostream>
using namespace std;

Polygon::Polygon()
{
    this -> width=0;
    this -> height=0;
}

Polygon::~Polygon()
{
    //dtor
}

Polygon::Polygon(int a, int b):
width(a),height(b){}

int Polygon::area(void){return 0;}
void Polygon:: printarea(){
 cout<<this-> area()<<'\n';
}
