#include "Cursos.h"
#include<iostream>
#include<string>
using namespace std;
Cursos::Cursos()
{

}
Cursos::Cursos(Cursos &o){
  nombre=o.nombre;
  codigo=o.codigo;
  cantidadDeAlumnos=o.cantidadDeAlumnos;
  alumnos=o.alumnos;
}
Cursos::Cursos(string nombre,string codigo,Estudiante *alumnos,int cantidadDeAlumnos){
this->nombre=nombre;
this->codigo=codigo;
this ->alumnos=alumnos;
this->cantidadDeAlumnos =cantidadDeAlumnos;
}
Cursos::~Cursos()
{
    //dtor
}
string Cursos :: ObtenerNombre(){return nombre;}

string Cursos :: ObtenerCodigo(){return codigo;}

int Cursos:: ObtenerCantidaddeAlumnos(){return cantidadDeAlumnos;}

Estudiante * Cursos :: ObtenerDireccion(){return alumnos;}


void Cursos :: ModificarNombre(string nombre){
    this-> nombre=nombre;
}
void Cursos :: ModificarCodigo(string codigo){
    this-> codigo=codigo;
}
void Cursos :: ModificarCantidaddeAlumnos(int cantidadDeAlumnos){
    this -> cantidadDeAlumnos=cantidadDeAlumnos;
}

void Cursos :: ModificarDireccion(Estudiante* alumnos){
    this ->alumnos=alumnos;
}
void Cursos ::IncrementarUnEstudiante(){
 cantidadDeAlumnos+=1;
}
