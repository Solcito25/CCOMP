#include <iostream>
using namespace std;
/*
//Numero potencia de dos
int main(){
  int a;
  int e=1;

  cin>>a;

 while(e<a){
    e=e*2;
 }
 if (e == a)
        cout<<"Es potencia de dos";
 else
        cout<<"No es potencia de dos";
 return 0;


 }
 /*int main(){
 int a;
 float c;
 float b=2;
 cin>>a;
  while(b<a)
    c = a%b
    b=b+1
*/
/*
//Numeros primos while
int main (){
	int a,d,c=0,e=0;
	int b=1;
    cin>>a;
    while(b<a){
        d=a%b;
        b=b+1;
        //cout<<"modulo"<<d<<endl;
        if (d !=0){
           c=c+1;
         //  cout<<"residuo"<<d<<endl;
        }
        if (d==0) {
            e=e+1;
         //   cout<<"ceros"<<e<<endl;
        }

    }
    if (c==a-2)
        cout<<"es primo"<<endl;
    else
        cout<<"no es primo"<<endl;

}*/

/*
// numeros primos for
int main(){
int a,d,c=0,e=0;
	int b=1;
    cin>>a;

 for(b;b<a;b=b+1){
        d=a%b;

        //cout<<"modulo"<<d<<endl;
        if (d !=0){
           c=c+1;
         //  cout<<"residuo"<<d<<endl;
        }
        if (d==0) {
            e=e+1;
         //  cout<<"ceros"<<e<<endl;
        }
}
 if (c==a-2)
        cout<<"es primo"<<endl;
 else
        cout<<"no es primo"<<endl;
}*/

/*
//Numeros primos menores de 100 while
int main (){
int a=2,d,c=0,e=0,b=1;

    while (a <100){
        while(b<a){
            d=a%b;
            b=b+1;
              if (d!= 0){
                c=c+1;
              }
              if (d==0) {
                e=e+1;

            }

        }

        if (c==a-2)
            cout<<a<<endl;


        a=a+1;
        c=0;
        b=1;

         }



}*/

// Numeros primos menores de 100 for
/*int main(){
int a=1,d,c=0,e=0;
	int b=1;


 for(a;a<100;a=a+1){
  for(b;b<a;b=b+1){
        d=a%b;

        //cout<<"modulo"<<d<<endl;
        if (d !=0){
           c=c+1;
         //  cout<<"residuo"<<d<<endl;
        }
        if (d==0) {
            e=e+1;
         //  cout<<"ceros"<<e<<endl;
        }
 }
  if (c==a-2)
        cout<<a<<endl;
  c=0;
  b=1;

}
} */
// Numeros perfectos while
/*int main(){
 int a,b=2,c=1;
 cin>>a;
  while (b<a){
    if (a%b == 0)
        c=c+b;
    if (a%b != 0)
        c=c+0;
    b=b+1;
  }
  if (c==a){
    cout<<"Es un numero perfecto"<<endl;}
  else{
    cout<<"No es un numero perfecto"<<endl;}

}*/
// Numeros perfectos for
/*int main(){
 int a,b=2,c=1;
 cin>>a;
  for (b;b<a;b=b+1){
    if (a%b == 0)
        c=c+b;
    if (a%b != 0)
        c=c+0;

  }
  if (c==a){
    cout<<"Es un numero perfecto"<<endl;}
  else{
    cout<<"No es un numero perfecto"<<endl;}



}*/
