#include <iostream>
#include "Empleado.h"
#include "Estudiante.h"
#include "Cursos.h"
#include<string>
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
cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
 Empleado c("Luis","Veliz",-200.6);
 c.ObtenerApellido();
 c.ObtenerNombre();
 c.ObtenerSalario();
 c.SalarioAnual();
 c.Descuento();
 c.SalarioAnual();

 Empleado arr[2]{a,c};
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;

 Estudiante e("Julio","Velasquez","012457896321");
 e.ObtenerNombre();
 e.ObtenerApellido();
 e.ObtenerCodigo();
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;

 Estudiante f("Rafael","Jimenez","012519519881");
 f.ObtenerNombre();
 f.ObtenerApellido();
 f.ObtenerCodigo();
 cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
/*Cursos g;//("Comunicacion","12321",2);
cout<<g.ObtenerNombre()<<endl;
cout<<g.ObtenerCodigo()<<endl;
cout<<g.ObtenerCantidaddeAlumnos()<<endl;

 Empleado arr[2]={a,c};
*/

}

void OrdenarNombres(Empleado *arr){
for(int i=0;i<2;i++){
int n = static_cast<int>(arr[i].ObtenerApellidos()[0]);
int m = static_cast<int>(arr[i+1].ObtenerApellidos()[0]);
}
if (n>m)
    swap(arr[i],arr[i+1]);
else{



}
}



