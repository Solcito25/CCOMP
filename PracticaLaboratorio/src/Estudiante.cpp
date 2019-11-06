#include "Estudiante.h"
#include<iostream>
#include<string>
using namespace std;
Estudiante::Estudiante()
{
   nombre="";
   apellido="";
   codigo="";
}

Estudiante::~Estudiante()
{
    //dtor
}
Estudiante::Estudiante (string nombre, string apellido,string codigo){
this -> nombre=nombre;
this -> apellido=apellido;
this -> codigo=codigo;
}
void Estudiante :: ObtenerNombre(){
    cout<<"Nombre: "<<nombre<<endl;
}

void Estudiante :: ObtenerApellido(){
    cout<<"Apellido: "<<apellido<<endl;
}

void Estudiante::ObtenerCodigo(){
    cout<<"Codigo: "<<codigo<<endl;
}
