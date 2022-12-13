// Програма Prog2_5.cpp
// предаване на обект като аргумент на функция
#include <iostream> 
using namespace std;

class C2 { 
  int i; 
public:
  void set_i(int x) { i = x; } 
  void out_i() { cout<< i << " "; }
};

void f(C2 x){
  x.out_i(); // Извежда число.
  x.set_i(100); // Създава само локално копие, 
  x.out_i(); // Извежда числото 100.
}

int main(){
  C2 o;
  o.set_i(10); 
  f(o);
  o.out_i(); // Както преди извежда числото 10, 
// защото стойността на променливата i не се е изменила.
  return 0;
}


