// �������� Prog2_13.cpp
// ��� ������ ���������� this
#include <iostream>
using namespace std;
class cl { 
  int i; 
public:
  void set_i(int val) {this->i = val; } // ������ ���� i = val 
  int get_i () {
	return this->i;// ������ ���� return i
  } 
} ;
int main(){
  cl o;
  o.set_i(100); 
  cout << o.get_i();
  return 0;
}
