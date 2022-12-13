// Програма Prog2_13.cpp
// как работи указателят this
#include <iostream>
using namespace std;
class cl { 
  int i; 
public:
  void set_i(int val) {this->i = val; } // същото като i = val 
  int get_i () {
	return this->i;// същото като return i
  } 
} ;
int main(){
  cl o;
  o.set_i(100); 
  cout << o.get_i();
  return 0;
}
