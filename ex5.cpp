# include <iostream>
# include <cmath>
using namespace std; 
int main(){
  int i, f=1, s=0; 
  cout << "i:"; 
  cin >> i; 
  while (s<i){
    s = s + 1; 
    f = f * s;
  }
  cout << f << endl;
}
