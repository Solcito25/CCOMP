#include<iostream>
using namespace std;

/*int main (){
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
        cout<<"es primo"<<a<<endl;
        else
        cout<<"no es primo"<<a<<endl;
}

}*/

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


    }



}

