# include <iostream>
using namespace std;
long int fib(int x){
  long int f2=0;
  long int f1=1;
  long int fib=0;
  if(x==0 or x==1){
    return x;
  }
  else{
    for(int i=2;i<=x;i++){
      fib = f1 + f2;
      f2 = f1;
      f1 = fib;
    }
  }
  return fib;
  }
int main(){
  long int a;
  long int b;
  cout << "enter a number:";
  cin >> b; 
  a = fib(b);
  cout << "Fibonacci of " << b << " is: " << a << endl;
  return 0;
}


