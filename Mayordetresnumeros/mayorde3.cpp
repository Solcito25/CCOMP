 #include<iostream>
 using namespace std;
 int main (){
 float a,b,c,d;
        cout << "Ingrese el primer numero: " << endl;
        cin>>a;
        cout << "Ingrese el primer numero: " << endl;
        cin>>b;
        cout << "Ingrese el primer numero: " << endl;
        cin>>c;
        if(a>b)
            d=a;
        else
            d=b;
        if(d>c)
            cout << "El numero mayor es " <<d<< endl;
        else
            cout << "El numero mayor es "<<c<< endl;

return 0;
 }
