// �������� Prog2_4.cpp
// ������������ �� ����������� �� ������.
#include <iostream> 
using namespace std;

class myclass { 
  int a, b; 
public:
  void setab(int i, int j) { a = i; b = j; } 
  void showab();
};
void myclass::showab(){
  cout << "� ����� �� " << a << '\n'; 
  cout << "b ����� �� " << b << '\n'; 
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass ob1, ob2;
  ob1.setab(10, 20); 
  ob2.setab(0, 0);
  
  cout << "����� ob1 �� �������������:\n"; 
  ob1.showab();
  cout << "\n����� ob2 �� �������������:\n"; 
  ob2.showab();
  cout << '\n';
  
  ob2 = ob1;  // ����������� ������ ob1 �� ������ ob2. 
  cout << "\n����� ob1 ���� �������������:\n";
  ob1.showab();
  cout << "\n����� ob2 ���� �������������:\n"; 
  ob2.showab();
}
