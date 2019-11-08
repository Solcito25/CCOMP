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
cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
 Empleado c("Luis","Veliz",-200.6);
 c.ObtenerApellido();
 c.ObtenerNombre();
 c.ObtenerSalario();
 c.SalarioAnual();
 c.Descuento();
 c.SalarioAnual();

 Empleado arr[2]={a,c};
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
vector<Estudiante>lista;
vector<Estudiante>lista1;
lista.push_back(e);
lista1.push_back(e);
lista.push_back(f);

Cursos cursillo("MATE","516",lista1,2);
/*cout<<cursillo.ObtenerNombre()<<endl;
cout<<cursillo.ObtenerCodigo()<<endl;
cout<<cursillo.ObtenerCantidaddeAlumnos()<<endl;
cout<<cursillo.ObtenerDireccion()<<endl;
*/


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




