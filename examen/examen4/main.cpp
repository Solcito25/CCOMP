#include <iostream>

using namespace std;

int main()
{
    int a=1,b=2,c=1,d;

     cin>>d;
    for (a;a<=d;a++){
        for (b;b<a;b++){
            if (a%b == 0)
                c=c+b;
            if (a%b != 0)
                c=c+0;

  }

        if (c==a)
            cout<<a<<".Es un numero perfecto"<<endl;
        c=1;
        b=2;
        //else
          //  cout<<a<<".No es un numero perfecto"<<endl;



    }
}
