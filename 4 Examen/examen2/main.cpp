#include <iostream>

using namespace std;
 int factorial(int a, int b=1,int c=1){
  while (c<=a){
    b=b*c;
  c=c+1;
  }
  return b;
 }


int main()
{
 cout<<factorial(4)<<endl;
}
