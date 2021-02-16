# include <iostream>
using namespace std;
# include <cmath> 

int num_of_lines(int n){
  int number = 1;
  for (int i=1; i<=n; i++){
    for (int j=1; j<=i; ++j){
      cout << number << " "; 
      ++number;}

    cout << endl;}
}

int main(){
  int n;
  cout << "enter number of lines: ";  
  cin >> n; 
  num_of_lines(n);
  return 0; 
  }
