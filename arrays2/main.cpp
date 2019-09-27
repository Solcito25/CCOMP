#include <iostream>

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
void bs (int arr[], int t){
  for(int i=1;i<t;i++){
    for(int j=0;j<t-i;j++){
       if (arr[j]>arr[j+1])
          swaps(arr[j+1],arr[j]);
 }
  }
}
void ins (int arr[], int t,int a=0){
for(int i=1;i<t;i++){
    int a=arr[i];
    int j=i;
    for(j;(j>0 && arr[j-1]>a);j--){
        swaps(arr[j],arr[j-1]);
    }
    arr[j]=a;
}
}
void quick (int arr[], int t){
    int piv=t/2;
    int i=0;
    int j=t-1;
    while(i<piv && j>piv){
        if (arr[i]> arr[piv] && arr[j]< arr[piv]){
            swaps(arr[i],arr[j]);
            cout<<"si"<<endl;
            i++;
            j--;

        }
        else if  (arr[i]<arr[piv] && arr[j]>arr[piv]){
             cout<<"m"<<endl;
            i++;
            j--;
        }
        else if(arr[i]>arr[piv] && arr[j]>arr[piv]){
             cout<<"n"<<endl;
            j--;
        }

        else if (arr[i]<arr[piv] && arr[j]<arr[piv]){
            cout<<"o"<<endl;
            i++;

        }


        }
   int h=0;
   while(h<piv){
    if (arr[i]>arr[i+1]){
        swaps(arr[i],arr[i+1]);
    }
    h++;

    }
   int l=piv;
   while(l<t){
    if(arr[l]>arr[l+1]){
        swaps(arr[l],arr[l+1]);
    }
     l++;
    }



   }

int main()
{
    int arr[6]={10,5,2,6,8,7};
     //bs(arr,4);
     //imprimir(arr,4);
     //ins(arr,4);
     //imprimir(arr,4);
     quick(arr,6);
     imprimir(arr,6);
}





