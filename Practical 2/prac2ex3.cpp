# include <iostream>
using namespace std;
# include <cmath>

  void swap(int &x, int &y){
    int integer;
    integer=x;
    x=y;
    y=integer;
  
  }
  int main(){
    int x, y;
    cout << "enter the first integer: " << endl; 
    cin >> x; 
    cout << "enter the second integer: " << endl; 
    cin >> y; 
    swap(x, y);
    cout << "first integer after swapping becomes: " << x << endl;
    cout << "second integer after swapping becomes: " << y << endl;
    return 0;
  }
  