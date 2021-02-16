#include <iostream>
#include "practical7stackI.hpp"
#include "practical7stack.hpp"

int main(int argc, const char * argv[]){
  stack<int>e;
  stack<int>(7);

  e.print();
  e.push(1);
  e.push(2);
  e.push(3);
  e.push(4);
  e.push(5);
  e.print();
  e.pop();
  e.print();
  e.pop();
  e.print();

  return 0;

}
