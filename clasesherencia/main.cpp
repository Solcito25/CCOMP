#include <iostream>
#include<string>
#include "Electrodomestico.h"
#include "Licuadora.h"
#include "Televisor.h"
using namespace std;

int main()
{
    Electrodomestico a("X-351","2016");
    cout<<"Anio: "<<a.getAnio()<<endl;
    cout<<"Modelo: "<<a.getModelo()<<endl;

    cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;

    Licuadora b("B-555","2011","2.3 HP","vidrio");
     cout<<"Licuadora"<<endl;
     cout<<"Anio: "<<b.getAnio()<<endl;
     cout<<"Modelo: "<<b.getModelo()<<endl;
     cout<<"Potencia de Motor: "<<b.GetMotor()<<endl;
     cout<<"Material de envase: "<<b.GetEnvase()<<endl;
    cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
     Licuadora *ptr=&b;
     cout<<"Licuadora 2 con puntero"<<endl;
     cout<<"Anio: "<<ptr->getAnio()<<endl;
     cout<<"Modelo: "<<ptr->getModelo()<<endl;
     cout<<"Potencia de Motor: "<<ptr->GetMotor()<<endl;
     cout<<"Material de envase: "<<ptr->GetEnvase()<<endl;

    cout<<endl<<"°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°.°"<<endl;
    Televisor c("WS-985","2019","4k","50 pulgadas");
     cout<<"Televisor"<<endl;
     cout<<"Anio: "<<c.getAnio()<<endl;
     cout<<"Modelo: "<<c.getModelo()<<endl;
     cout<<"Resolucion: "<<c.GetResolucion()<<endl;
     cout<<"Tamanio: "<<c.GetTamanio()<<endl;
    return 0;
}
