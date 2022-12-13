// Програма Prog1_8.cpp
// Инкрементация и декрементация на указател към обект.
// Използване на операторите . и ->
#include <iostream> 
using namespace std;

class P_example { 
  int num; 
public:
  void set_num(int val) {num = val;} 
  void show_num();
};

void P_example::show_num(){ cout << num << "\n";}

int main(){
  P_example ob[2], *p;
  
  ob[0].set_num(10); // пряк достъп до обект 
  ob[1].set_num(20);
//  p = &ob[0]; // следващият ред прави същото, но е по-кратък.
  p = ob; 
  p->show_num();
  p++; p->show_num();
  p--; p->show_num();
 // p--; p->show_num();// къде сме?
  return 0;
}
