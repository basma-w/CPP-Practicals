#include <iostream>
using namespace std; 
#include <cmath>

int callNum; //global variable initialized to 0 by default


int power_of_a(int a,int n){
  
  if(n>=1){
    callNum = callNum + 1;
    return a*power_of_a(a, n-1);
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
  cout<<"the number of recursive calls is: "<<callNum;
  return 0;

   
}
 // Relation: The number of recursive calls is equal to n because to reach the base case (n=0), a^(n-1) has to be multiplied by "a" n times