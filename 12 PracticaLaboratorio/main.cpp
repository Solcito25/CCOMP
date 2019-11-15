#include <iostream>
#include "Empleado.h"
#include "Estudiante.h"
#include "Cursos.h"
#include<string>
#include<vector>
using namespace std;

int main()
{
 Empleado a("Juan","Perez",530.5);

 a.ObtenerApellido();
 a.ObtenerNombre();
 a.ObtenerSalario();
 a.SalarioAnual();
 a.Descuento();
 a.SalarioAnual();
cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
 Empleado c("Luis","Veliz",-200.6);
 c.ObtenerApellido();
 c.ObtenerNombre();
 c.ObtenerSalario();
 c.SalarioAnual();
 c.Descuento();
 c.SalarioAnual();

 Empleado arr[2]={a,c};
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;

 Estudiante e("Julio","Velasquez","012457896321");
 e.ObtenerNombre();
 e.ObtenerApellido();
 e.ObtenerCodigo();
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;

 Estudiante f("Rafael","Jimenez","012519519881");
 f.ObtenerNombre();
 f.ObtenerApellido();
 f.ObtenerCodigo();
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;


Estudiante arreglo[2]={e,f};
Estudiante arreglo2[1]={e};
Cursos g("Matematica","516",arreglo,2);
cout<<"Nombre del Curso:"<<g.ObtenerNombre()<<endl;
cout<<"Codigo del Curso:"<<g.ObtenerCodigo()<<endl;
cout<<"Cantidad de Alumnos:"<<g.ObtenerCantidaddeAlumnos()<<endl;
cout<<"Direccion de lista:"<<g.ObtenerDireccion()<<endl;
g.ModificarNombre("Comunicacion");
g.ModificarCodigo("135");
g.ModificarDireccion(arreglo2);
g.IncrementarUnEstudiante();
cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
cout<<"Nombre del Curso:"<<g.ObtenerNombre()<<endl;
cout<<"Codigo del Curso:"<<g.ObtenerCodigo()<<endl;
cout<<"Cantidad de Alumnos:"<<g.ObtenerCantidaddeAlumnos()<<endl;
cout<<"Direccion de lista:"<<g.ObtenerDireccion()<<endl;

cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
Cursos h("Matematica I","517",arreglo,2);
cout<<"Nombre del Curso:"<<h.ObtenerNombre()<<endl;
cout<<"Codigo del Curso:"<<h.ObtenerCodigo()<<endl;
cout<<"Cantidad de Alumnos:"<<h.ObtenerCantidaddeAlumnos()<<endl;
cout<<"Direccion de lista:"<<h.ObtenerDireccion()<<endl;
h.ModificarNombre("Comunicacion II");
h.ModificarCodigo("136");
h.ModificarDireccion(arreglo2);
h.IncrementarUnEstudiante();
cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
cout<<"Nombre del Curso:"<<h.ObtenerNombre()<<endl;
cout<<"Codigo del Curso:"<<h.ObtenerCodigo()<<endl;
cout<<"Cantidad de Alumnos:"<<h.ObtenerCantidaddeAlumnos()<<endl;
cout<<"Direccion de lista:"<<h.ObtenerDireccion()<<endl;
}

void OrdenarNombres(Empleado arr[]){
for(int i=0;i<2;i++){
int n = static_cast<int>(arr[i].ObtenerApellidos()[0]);
int m = static_cast<int>(arr[i+1].ObtenerApellidos()[0]);
if (n>m)
    swap(arr[i],arr[i+1]);
if(n==m){
  for(int f=0;f<(arr[i].ObtenerApellidos().size())&& (arr[i+1].ObtenerApellidos().size());f++){
    int o = static_cast<int>(arr[i].ObtenerApellidos()[f]);
    int p = static_cast<int>(arr[i+1].ObtenerApellidos()[f]);
    if (o>p){
        swap(arr[i],arr[i+1]);
        break;
    }
  }
}
}
}




