#include "Empleado.h"

Empleado::Empleado()
{
    nombre="";
    apellido="";
    salario=0;
}
Empleado::Empleado(string nombre, string apellido, double salario){
    this -> nombre=nombre;
    this ->apellido=apellido;
    this ->salario=salario;
}
string Empleado:: ObtenerApellidos(){return apellido;}
Empleado::~Empleado()
{
    //dtor
}
void Empleado :: ObtenerApellido(){
    cout<<"Apellido: "<<apellido<<endl;
}

void Empleado :: ObtenerNombre(){
    cout<<"Nombre: "<<nombre<<endl;
}
void Empleado :: ObtenerSalario(){
    cout<<"Salario: "<<SalarioPositivo(salario)<<endl;
 }
int Empleado:: SalarioPositivo(double salario){
if (salario<0)
    return 0;
else
    return salario;

}
void Empleado::SalarioAnual(){
     cout<< "Salario Anual: "<<SalarioPositivo(salario*12)<<endl;
 }
void Empleado :: Descuento(){
    salario= salario-(salario*0.1);
    cout<<"Salario con descuento: "<<SalarioPositivo(salario)<<endl;
 }

