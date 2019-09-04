#include <iostream>
using namespace std;

/*int main(){
 int a,b,c,d,e,f;
  cout<<"inserte un valor de 5 digitos"<<endl;
  cin>> a;
  b=a/10000;
  c=(a-(b*10000))/1000;
  d=(a-(b*10000+c*1000))/100;
  e=(a-(b*10000+c*1000+d*100))/10;
  f=a-(b*10000+c*1000+d*100+e*10);

  if (b==f && c==e)
    cout<<"es palindromo"<<endl;
  else
    cout<<" no es palindromo"<<endl;
//  cout<<b<<'\t';
//  cout<<c<<'\t';
//  cout<<d<<'\t';
//  cout<<e<<'\t';
//  cout<<f<<'\t';

}*/

/*int main(){
  int n=1;
  int a;
  cout<<"inserte su valor"<<endl;
  cin>> a;
  int b ;
  b=10;
  while(true){
    if (a>=b)
    {
        b=b*10;
        n=n+1;

    }
   if (a<b){
    cout<<a<<"tiene"<<n<<"digitos"<<endl;

    return false;
   }
  }
   return 0;

}*/

/*int main(){
char a;
cout<<"inserte un caracter"<<endl;
cin >> a;
int n=static_cast<int>(a);
if(n>48 && n<57)
    cout<<"es numero"<<endl;
else
    cout <<"no es un numero"<<endl;
return 0;


}
*/

int main(){
char a;
cout<<"inserte un caracter"<<endl;
cin >> a;
int n=static_cast<int>(a);
char m=static_cast<char>(n+32);
if(n>48 && n<57)
    cout<<"es mayuscula"<<m<<endl;
else if (n>97 && n<122)
    cout <<" es ,minuscula"<<endl;

return 0;


}





