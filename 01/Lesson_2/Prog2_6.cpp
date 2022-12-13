// Програма Prog2_6.cpp
// Конструктори, деструктори и предаване на обекти.
#include <iostream> 
using namespace std;

class myclass{ 
  int val; 
public:
  myclass(int i) { val = i; cout << "Създаване\n"; }
  ~myclass() { cout << "Разрушаване\n"; }
  int getval() { return val; }
};

void display(myclass ob){
  cout << ob.getval() << '\n';
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10);
  display(a); 
}
