// is a number multiple of another? 
# include <iostream>
# include <cmath>
int main(){
  int x, y;
  std::cout << "x: "; 
  std::cin >> x; 
  std::cout << "y: "; 
  std::cin >> y; 
  if(x%y==0)
    std::cout << "x is a multiple of y" << std::endl; 
  else{
    std::cout << "x is not a multiple of y" << std::endl;
  }

}