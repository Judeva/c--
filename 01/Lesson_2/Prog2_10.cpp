// �������� Prog2_10.cpp ���������� �� �������
// ����������� ��� ��������� �� ��������� ��� �������.
#include <iostream>
#include <cstdlib> 
using namespace std;

class myclass { 
  int *p; 
public:
  myclass(int i); // ��������� �����������
  myclass(const myclass &ob); // ����������� �� �����
  ~myclass();
  int getval() { return *p; }
};

// ����������� �� �����.
myclass::myclass(const myclass &obj){
  p = new int;
  cout << "\n� �����������a �� �������:\n" << 
  	"��� ����� ���� � ���� ���������� => "<<*p<<"\n";
  *p = *obj.p; // ���������� �� �������
  cout << "��� ����� ���� � ���� ������������� => "<<*p<<"\n";
}
// ��������� �����������, 
myclass::myclass(int i){
  cout << "� ����������� �����������:\n"  << 
  	"�������� �� �����, ������ �� ��������� p.\n"; 
  p = new int;
  *p = i;
  cout << "��� ����� ���� � ���� ������������� => "<<*p<<"\n";
}
// ��� ������� ������ ���� �����-���������, 
void display(myclass ob){
  cout << "\n��� display = " << ob.getval() << '\n';
}
myclass::~myclass(){
  cout << "\n������������� �� �������, ������ �� ��������� p.\n"; 
  delete p;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); 
  display(a); 
  cout << "\nmain() ��� �� � ���������!\n";
}
