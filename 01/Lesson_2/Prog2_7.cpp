// �������� Prog2_7.cpp
// ������������ �� ����������, �������� ��� ��������� �� ������ ��� �������.
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
  cout << "�������� �� �����, ��������� �� ��������� p.\n"; 
  p = new int;
  *p = i;
}

myclass::~myclass(){
 cout << "������������� �� �������, ��������� �� ��������� p.\n"; 
 delete p;
}
// ��� ���������� �� ��������� ��� ��� ��������� �������� �������, 
//void display(myclass ob){
// � ������������ �� ��������� ��������� �� ������! 
void display(myclass &ob){
  cout << ob.getval() << '\n';
}
int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); 
  display(a); 
  return 0;
}
