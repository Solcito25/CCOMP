#include <iostream>

using namespace std;
 void imprimir(int arr[], int t){
 for(int i=0;i<t;i++){
    cout<<arr[i]<<",";

 }
 }

 int sumar (int arr[], int t,int suma=0){

 for(int i=0;i<t;i++){
   suma+=arr[i];
 }
 return suma;


 }
int sum (int arr[], int t,int suma=0,int i=0){
if (i<t){
   suma+=arr[i];
   return sum(arr,t,suma,i+1);
}
 else
    return suma;
 }
void swaps(int&x, int&y){
int z=x;
x=y;
y=z;


}
void invertir(int arr[], int t){
int a=t/2;
t-=1;
for(int i=0;i<a;i++){
    swaps(arr[i],arr[t]);
    t--;
    /*int b=arr[i];
    arr[i]=arr[t];
    arr[t--]=b;*/

}

}

void invertir2(int arr[], int t, int i=0){
//int a=t/2
//t-=1;
swaps(arr[i],arr[t-i-1]);
if (i<(t/2-1)){
   return invertir2(arr,t,i+1);
}
}

int main()
{
    int arreglo[5]={1,2,3,4,5};
    //imprimir(arreglo,6);
    //cout<<sumar(arreglo,6);
    //cout<<sum(arreglo,6);,int a=t/2
    //invertir(arreglo,6);
    invertir2(arreglo,5);
    imprimir(arreglo,5);
}
