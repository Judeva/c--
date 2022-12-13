// Програма Prog2_7.cpp
// Демонстрация на проблемите, възможни при предаване на обекти към функции.
#include <iostream>
#include <cstdlib> 
using namespace std;

class myclass { 
  int *p; 
public:
  myclass(int i);
  ~myclass();
  int getval() { return *p; }
};

myclass::myclass(int i){
  cout << "Заделяне на памет, адресуема от указателя p.\n"; 
  p = new int;
  *p = i;
}

myclass::~myclass(){
 cout << "Освобождаване на паметта, адресуема от указателя p.\n"; 
 delete p;
}
// При използване на следващия ред във функцията възниква проблем, 
//void display(myclass ob){
// С използването на псевдоним проблемът се решава! 
void display(myclass &ob){
  cout << ob.getval() << '\n';
}
int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); 
  display(a); 
  return 0;
}
