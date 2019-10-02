#include <iostream>
#include <vector>

using namespace std;
void imprimir(int arr[], int t){
 for(int i=0;i<t;i++){
    cout<<arr[i]<<",";

 }
 }
void swaps(int&x, int&y){
int z=x;
x=y;
y=z;
}

void quick(int arr[], int ini, int fin){
int centro,a,b,pivote;
 centro = (ini+fin)/2;
 pivote=arr[centro];
 a=ini;
 b=fin;
 while(a<=b){
    while(arr[a]<pivote){
            a++;
                }
    while(arr[b]>pivote){
        b--;
            }
    if(a<=b){
        swaps(arr[a],arr[b]);
        a++;
        b--;
    }

 }
  if(ini<b){
    quick(arr,ini,b);
  }
 if (a<fin){
    quick(arr,a,fin);
 }
}

int main(){

    int arr[6]={10,5,2,6,8,7};


     quick(arr,0,5);
    imprimir(arr,6);



}
