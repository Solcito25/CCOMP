#include <iostream>

using namespace std;
int factorial(int a, int b=1, int c=1){
  if (c<=a){
    b=b*c;
  return factorial(a, b,c+1);
  }
  else
  return b;



}
int main()
{
    cout <<factorial(5) << endl;

}
