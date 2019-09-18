#include <iostream>

using namespace std;


    /*int a,b,c=1,d=1,f,e;
    cin>>a,f;
    cin>>b,e;
    if (b*2==a)
        cout<<b<<endl;
    else if (a*2==b)
        cout<<a<<endl;
    else{
    while((c<=b)&&(c<=a)){
        if ((f%c==0)&&(e%c==0)){
             d=d*c;
             f=a/c;
             e=b/c;
             c++;
        }

        else
            c++;

     }
     cout<<d<<endl;
    }*/

    int pares (int &d){
     if (d%2==0)
        return d;
     return 0;
    }
    int impares (int &d){
     if (d%2!=0)
        return d;
    return 0;
    }
    int main(){
    int a,b,c,d=0;
    cout<<"desde"<<endl;
    cin>>a;
    cout<<"hasta"<<endl;
    cin>>b;
    cout<<"incremento"<<endl;
    cin>>c;

    for(a;a<=b;a=a+c){
      //cout<<a<<endl;
      cout<<"es par "<<pares(a)<<endl;
      cout<<"es impar"<<impares(a)<<endl;

    }
}
