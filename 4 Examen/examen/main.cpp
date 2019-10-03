#include <iostream>

using namespace std;

int main()
{
   long long  a=1, b=1000000,c=0;
   while(a<=b){
     if ((a%3==0)&&(a%5==0)){
     //cout<<"si"<<endl;
     c=c+a;
     /*cout<<a<<endl;*/}
     else{
        c=c+0;}
    a=a+1;
}
cout<<c<<endl;
}
