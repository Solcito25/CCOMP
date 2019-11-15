#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include<iostream>
using namespace std;

class Estudiante
{
    public:
        Estudiante();
        Estudiante(string nombre, string apellido,string codigo);
        void ObtenerNombre();
        void ObtenerApellido();
        void ObtenerCodigo();
        virtual ~Estudiante();

    protected:

    private:
        string nombre;
        string apellido;
        string codigo;
};

#endif // ESTUDIANTE_H
