#include "ArrayPolygons.h"

ArrayPolygons::ArrayPolygons()
{
    this -> sizes=0,
    this -> arr=new Polygon[sizes];
}

ArrayPolygons::~ArrayPolygons()
{
    delete[]arr;
}
 ArrayPolygons::ArrayPolygons(Polygon a[],int s){
    this -> sizes=s,
    this -> arr=new Polygon[sizes];
    for(int i=0;i<sizes;i++){
        this -> arr[i]=arr[i];
    }

 }
ArrayPolygons::ArrayPolygons(ArrayPolygons &o){
    arr=new Polygon[o.sizes];
    this ->sizes=o.sizes;

}

void ArrayPolygons::insertarfinal(Polygon d){
    sizes++;
    Polygon *tmp=new Polygon[sizes];
    for(int i=0;i<sizes-1;i++){
         tmp[i]=arr[i];
    }
    tmp[sizes-1]=d;
    delete []arr;
    arr=tmp;
}
void ArrayPolygons::insertar(Polygon d,int pos){
sizes++;
    Polygon *tmp=new Polygon[sizes];
    for(int i=0;i<pos;i++){
         tmp[i]=arr[i];
    }
    tmp[pos]=d;
    int k=pos+1;
    while (k<sizes-1){
        tmp[k]=arr[k-1];
        k++;
    }
    delete []arr;
    arr=tmp;
}
void ArrayPolygons::eliminar(){
sizes--;
    Polygon *tmp=new Polygon[sizes];
    for(int i=0;i<sizes;i++){
         tmp[i]=arr[i];
    }

    delete []arr;
    arr=tmp;
}

void ArrayPolygons:: redimensionar(int tam){
   if(sizes<tam){
   sizes=tam;
   Polygon *tmp=new Polygon[sizes];
   for(int i=0;i<sizes;i++){
         tmp[i]=arr[i];
    }
   }
   /*else{
        sizes=tam;
   Polygon *tmp=new Polygon[sizes];
   for(int i=0;i<sizes-1;i++){
         tmp[i]=arr[i];
    }
   }
*/
   }

