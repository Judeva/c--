// �������� Prog2_6.cpp
// ������������, ����������� � ��������� �� ������.
#include <iostream> 
using namespace std;

class myclass{ 
  int val; 
public:
  myclass(int i) { val = i; cout << "���������\n"; }
  ~myclass() { cout << "�����������\n"; }
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
