// �������� Prog2_5.cpp
// ��������� �� ����� ���� �������� �� �������
#include <iostream> 
using namespace std;

class C2 { 
  int i; 
public:
  void set_i(int x) { i = x; } 
  void out_i() { cout<< i << " "; }
};

void f(C2 x){
  x.out_i(); // ������� �����.
  x.set_i(100); // ������� ���� ������� �����, 
  x.out_i(); // ������� ������� 100.
}

int main(){
  C2 o;
  o.set_i(10); 
  f(o);
  o.out_i(); // ����� ����� ������� ������� 10, 
// ������ ���������� �� ������������ i �� �� � ��������.
  return 0;
}


