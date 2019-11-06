#include "Cursos.h"
#include<iostream>
#include<string>
using namespace std;
Cursos::Cursos()
{
   nombre="";
   codigo="";
   cantidadDeAlumnos=0;
   alumnos[0];
}
Cursos::Cursos(Cursos &o){
  nombre=o.nombre;
  codigo=o.codigo;
  cantidadDeAlumnos=o.cantidadDeAlumnos;
  alumnos=o.alumnos;
}
Cursos::Cursos(string nombre,string codigo,int cantidadDeAlumnos){
this->nombre=nombre;
this->codigo=codigo;
*alumnos=alumnos[cantidadDeAlumnos];
this->cantidadDeAlumnos =cantidadDeAlumnos;
}
Cursos::~Cursos()
{
    //dtor
}
string Cursos :: ObtenerNombre(){
    return nombre;
}
string Cursos :: ObtenerCodigo(){
    return codigo;
}
int Cursos:: ObtenerCantidaddeAlumnos(){
    return cantidadDeAlumnos;
    }


void Cursos :: ModificarNombre(string nombre){
    this-> nombre=nombre;
}
void Cursos :: ModificarCodigo(string codigo){
    this-> codigo=codigo;
}
void Cursos :: ModificarCantidaddeAlumnos(){
    this -> cantidadDeAlumnos=cantidadDeAlumnos;
}
void Cursos ::IncrementarUnEstudiante(){
 cantidadDeAlumnos+=1;
}
