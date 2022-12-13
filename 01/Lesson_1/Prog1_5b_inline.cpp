// Програма Prog1_5b.cpp
// е пример за две inline  член-функции
#include <iostream> 
using namespace std;

class cl {
  int i; // закрит член по подразбиране
public: // автоматично inline функции 
  int get_i() { return i; } 
  void put_i(int j) { i = j; }
} ;

//void cl::put_i(int j) { i = j; } // няма нужда, по добре да е inline 

int main(){
  cl a;
  a.put_i(7);
  cout << a.get_i() << endl;
  return 0;
}
