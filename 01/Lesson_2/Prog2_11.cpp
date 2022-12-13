// �������� Prog2_11.cpp  
// ��������� �� ������������ �� ����� �� ������������� �� ����� 
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
// ������������ ��������� ����������� � ������������ ���������
myclass::myclass(const myclass &ob){// ����������� �� �����
  cout << "�������� �� p-����� �� ������������ �� �����.\n";
  p = new int;
  *p = *ob.p; // �������� �� �������
}
myclass::myclass(int i){// ��������� ����������� 
  cout << "�������� �� p-����� �� ����������� �����������.\n"; 
  p = new int;
  *p = i;
}
myclass::~myclass(){
  cout << "������������� �� �-�������.\n"; 
  cout << "&p = " << &p << "  p = " << p << "  *p = " << *p << "\n\n";
  delete p;
}
int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); // ������� �� ������������ �����������, 
//  myclass c(7); // ������� �� ������������ �����������, 
//  a = c; // ������ �� �� ���� ��������� ����������� ��� ��� ���������� ���������� �����
  myclass b = a; // ������� �� ������������� �� �����, 
  return 0;
}

