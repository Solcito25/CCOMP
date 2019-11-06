#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
using namespace std;


class Empleado
{
    public:
        Empleado();
        Empleado(string nombre,string apellido,double salario);
        virtual ~Empleado();
        void ObtenerApellido();
        string ObtenerApellidos();
        void ObtenerNombre();
        void ObtenerSalario();
        void SalarioAnual();
        void Descuento();
        int SalarioPositivo(double salario);
    protected:

    private:
        string nombre, apellido;
        double salario;

};

#endif // EMPLEADO_H
