#ifndef CURSOS_H
#define CURSOS_H
#include "Estudiante.h"
#include<string>
#include<iostream>
using namespace std;

class Cursos
{
    public:
        Cursos();
        Cursos(Cursos &o);
        Cursos(string nombre,string codigo,Estudiante *alumnos,int cantidadDeAlumnos);
        string ObtenerNombre();
        string ObtenerCodigo();
        Estudiante* ObtenerDireccion();
        int ObtenerCantidaddeAlumnos();

        void ModificarNombre(string nombre);
        void ModificarCodigo(string codigo);
        void ModificarCantidaddeAlumnos(int cantidadDeAlumnos);
        void IncrementarUnEstudiante();
        void ModificarDireccion(Estudiante *alumno);
        virtual ~Cursos();

    protected:

    private:
        string nombre;
        string codigo;
        Estudiante *alumnos;
        int cantidadDeAlumnos;


};

#endif // CURSOS_H
