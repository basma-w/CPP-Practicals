# include <iostream>
# include <cmath>
using namespace std;
int main(){
  int i=0, j=0;
  while (i < 5){
    i = i + 1;
    j = 0; 
    while (j < i){
      cout << "*";
      j = j + 1;
    }
    cout << endl;
  }
  return 0;
}