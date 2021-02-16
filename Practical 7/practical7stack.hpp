#ifndef stack_hpp
#define stack_hpp
#include <stdio.h>
#include<iostream>
#include "practical7stackI.hpp"
using namespace std;
template<typename T>class stack:stackI<T>{
  protected:
  int indexoftop;
  int nbofelements;
  int size;
  T e[];

  public:
  stack(){
    e[20];
    indexoftop=0;
    nbofelements=0;
    size=20;
  }
  stack(int n){
    size=n;
    e[n];
    indexoftop=0;
    nbofelements=0;
  }

  void push(T t){
    if(nbofelements>=0 && nbofelements<size){
      e[indexoftop++]=t;
      nbofelements++;
    }else{
      cout<<"Exeption: stack is full"<<endl;
    }
  }
  
  void pop(){
    if(nbofelements>0){
      --indexoftop;
      --nbofelements;
    }else{
      cout<<"Exception: stack is empty"<<endl;
    }
  }
  
  T top(){
    if (nbofelements>0){
      return e[indexoftop];
    }else{
      cout<<"Exception: stack if empty"<<endl;
    }
  }
  
  
  
  void print(){
    cout<<"***********"<<endl;
    if(nbofelements==0){
      cout<<"empty stack"<<endl;
    }
    else{
      for (int i=indexoftop-1;i>=0;i--){
        if(i==indexoftop-1){
          cout<<"top: \t";
        }else{
          cout <<"\t\t";
        }
        cout<<e[i]<<endl;
      }
    cout<<"***********"<<endl<<endl;
    }
  }
  
  bool isEmpty(){
    return (nbofelements==0)? true:false;
  }
};
#endif