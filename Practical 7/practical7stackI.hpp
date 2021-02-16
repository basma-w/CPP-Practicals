#ifndef stackI_hpp
#define stackI_hpp
#include <stdio.h>
template<typename T>class stackI{
  public:
  virtual void push(T t)=0;
  virtual void pop()=0;
  virtual bool isEmpty()=0;
  virtual void print()=0;
};
#endif