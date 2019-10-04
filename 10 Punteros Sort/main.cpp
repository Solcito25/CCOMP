#include <iostream>

using namespace std;
void imprimir(int arr[], int t){
 for(int i=0;i<t;i++){
    cout<<arr[i]<<",";


 }
 cout<<endl;
 }
void swaps(int&x, int&y){
int z=x;
x=y;
y=z;
}
void bs (int *arr, int t){
  for(int i=1;i<t;i++){
    for(int j=0;j<t-i;j++){
       if (*(arr+j)>*(arr+j+1))
          swaps(*(arr+j+1),*(arr+j));
 }
  }
}

void ins (int *arr, int t,int a=0){
for(int i=1;i<t;i++){
    int a=*(arr+i);
    int j=i;
    for(j;(j>0 && *(arr+j-1)>a);j--){
        swaps(*(arr+j),*(arr+j-1));
    }
    *(arr+j)=a;
}
}
 void quick(int *arr, int ini, int fin){
int centro,a,b,pivote;
 centro = (ini+fin)/2;
 pivote=*(arr+centro);
 a=ini;
 b=fin;
 while(a<=b){
    while(*(arr+a)<pivote){
            a++;
                }
    while(*(arr+b)>pivote){
        b--;
            }
    if(a<=b){
        swaps(*(arr+a),*(arr+b));
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

int main()
{
    int arr[6]={10,5,2,6,8,7};
       bs(arr,6);
       imprimir(arr,6);
       ins(arr,6);
       imprimir(arr,6);
       quick(arr,0,5);
       imprimir(arr,6);
}
