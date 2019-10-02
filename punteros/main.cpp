#include <iostream>

using namespace std;
void imprimir (int *arr,int t){
    while (t--){
        cout<<*arr<<" ";
        arr++;
    }
}
int sumait ( int*arr, int t){
int suma=0;
while (t--){
    suma +=*arr;
    arr++;
}
 return suma;
}

int sumare (int *arr, int t,int suma=0,int i=0){
if (t--){
   suma+=*(arr+i);
   return sumare(arr,t,suma,i+1);
}
return suma;
}

void invertir(int *arr, int t){
int a=t/2;
//t-=1;
for(int i=0;i<a;i++){
    swap(*(arr+i),*(arr+t-1));
    t--;

}

}

void invertir2(int *arr, int t, int i=0, int y=0){
//int a=t/2
//t-=1;
y=t-i-1;
swap(*(arr+i),*(arr+y));
//imprimir(arr,4);
if (i!=y){
   return invertir2(arr,t,i+1);
}
}
int main()
{
   //int t=4;
   int arr[4]={4,5,6,7};
   //imprimir(arr,4);
   //cout <<sumait (arr,4)<<endl;;
   //cout <<sumare (arr,4);
   //invertir(arr,4);
   invertir2(arr,4);
   imprimir(arr,4);
}
