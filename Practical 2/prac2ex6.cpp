#include <iostream>
using namespace std;
int recursions=0;
long int fib(int x){
  long int f2 = 0;
  long int f1 =1;
  long int rf=1;
  if (x==0 or x==1){
    return x;
  }
  else{
    rf = (fib(x-1)+fib(x-2));
    recursions++;
  }
  return rf;
}
int main(){
  long int a;
  long int b;
  cout << "Enter a number: ";
  cin >> b;
  a = fib(b);
  cout << "Fibonacci of " << b << " is: " << a << endl;
  cout << "number of recursions: " << recursions << endl;
  return 0;
}