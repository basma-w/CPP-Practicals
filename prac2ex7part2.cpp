#include <iostream>
using namespace std; 
#include <cmath>

int numCall; //global variable initialized to 0 by default

int power_of_a(int a,int n){
  if(n!=0 && n%2==0){
    numCall = numCall+1;
    int p = power_of_a(a, n/2);
    return p*p;
  }
  else if (n!=0 && n%2==1){
    numCall = numCall+1;
    int p = power_of_a(a, n/2);
    return a*p*p;
  }
  else{
    return 1;
  }
}
int main(){
  int a, n; 
  int result;
  cout<<"enter integer a: ";
  cin>>a;
  cout<<"enter integer non-negative n: "; 
  cin>>n;
  if (n<0){
    cout<<"n must be a non-negative number! ...exiting program";
    return 0;
  }
  result=power_of_a(a, n) ;
  cout<<"the result is: "<<result<<endl; 
  cout<<"the number of recursive calls is: "<<numCall;
  return 0;

   
}
//Each time the function is called, one recursive call is made. At each call, the parameter "n" is halved. The number of times "n" can be halved until it reaches the base case n=0, is the ceiling of log2(n). As such, the number of recursive calls is ceiling of log2(n)