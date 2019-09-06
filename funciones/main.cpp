#include <iostream>

using namespace std;


    void imprimirDigitos(int a){
      int b,c,d,e,f;
      b=a/10000;
      c=(a-b*10000)/1000;
      d=(a-(b*10000+c*1000))/100;
      e=(a-(b*10000+c*1000+d*100))/10;
      f=a%10;
      cout<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e<<'\t'<<f<<'\t';

    }

    void contardigitos(int x){
    int y=1, z=0;
    while (x/y>0){
        z=z+1;
        y=y*10;

    }
        cout<<"Hay "<<z<<" digitos"<<endl;

    }
    bool esPalindromo(int a){
    int b,c,d,e,f;
      b=a/10000;
      c=(a-b*10000)/1000;
      d=(a-(b*10000+c*1000))/100;
      e=(a-(b*10000+c*1000+d*100))/10;
      f=a%10;
      if (b==f && c==e)
        return true;
      return false;


    }
   int calculafib(int a){
      int b=0,c=1,d=0,e=0;
       while (a>=b){
         d=c+e;
         c=e;
         e=d;
         b++;
        }
        return d;

   }
bool esNumero(char a){
 int n = static_cast<int>(a);
 if (n>=48 && n<=57)
    return true;
 return false;
 }
bool esletra(char a){
int n= static_cast<int>(a);
 if ((n>=65&&n<=90)|| (n>=97 && n<=122))
     return true;
 return false;
}
char convertirMay(char a){
  int n = static_cast<int>(a);
  if (n>=97&&n<=122){
     char m = static_cast<char>(n-32);
     return m;}
}
char convertirMIN(char a){
  int n = static_cast<int>(a);
  if (n>=65&&n<=90){
     char m = static_cast<char>(n+32);
     return m;}
}
int main(){
 char a;

 cin>>a;
 //imprimirDigitos(a);
 //contardigitos(a);
//cout<<esPalindromo(a);
//cout<<calculafib(a);
//cout<<esNumero(a);
//cout<< esletra(a);
//cout<< convertirMay(a);
cout<<convertirMIN(a);
}
