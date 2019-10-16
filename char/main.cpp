#include <iostream>

using namespace std;

int tam(char *cad){
int t=0;
while(*cad++ != '\0'){
    t++;
}
return t;
}

int tam2(char *cad){
if(*cad=='\0')
    return 0;
return 1+tam2(++cad);
}

void invertir(char *cad){
char *fin=cad+tam(cad)-1;

 while(fin>cad){
       swap(*cad,*fin);
       cad++;
       fin--;
 }
}
void invertir2(char*cad,char*fin){
  if (fin<cad)
    return;
  else{
    swap(*cad,*fin);
  return invertir2(++cad,--fin);
  }
}

bool palindromo(char *cad, int i=0){
char *fin=cad+tam(cad)-1;
int ca=tam(cad);
while(fin>cad){
      if (*fin == *cad){
          i++;
          }
          cad++;
          fin--;
}
if (i==ca/2)
   return true;
return false;
}
bool palrecursivo(char*cad,char *fin){
if(fin<=cad)
    return true;
    if(*fin != *cad)
        return false;
    else
        return true,palrecursivo(++cad,--fin);

}


int main()
{
    char cadena[] ="ot";
    char *fin=cadena+tam(cadena)-1;

    //cout<<tam(cadena)<<endl;
    //cout<<tam2(cadena)<<endl;
    //cout<<cadena<<endl;
    //invertir(cadena);
    //cout<<cadena<<endl;
    //cout<<"    "<<endl;

    //invertir2(cadena,fin);
    //cout<<cadena<<endl;
    cout<<boolalpha<<palrecursivo(cadena,fin)<<endl;
    return 0;
}
