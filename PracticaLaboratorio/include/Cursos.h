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
        Cursos(string nombre,string codigo,int cantidadDeAlumnos);
        string ObtenerNombre();
        string ObtenerCodigo();
        int ObtenerCantidaddeAlumnos();

        void ModificarNombre(string nombre);
        void ModificarCodigo(string codigo);
        void ModificarCantidaddeAlumnos();
        void IncrementarUnEstudiante();
        virtual ~Cursos();

    protected:

    private:
        string nombre;
        string codigo;
        Estudiante *alumnos;
        int cantidadDeAlumnos;


};

#endif // CURSOS_H
