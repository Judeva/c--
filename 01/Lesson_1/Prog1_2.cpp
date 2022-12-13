// �������� Prog1_2.cpp
// ������������ �� ������� ��� ��������� �� ���� ����.
#include <iostream> 
using namespace std;

class myclass {
  int a; // ������ �����
public: 
  int b; // ������� ����� 
  void setab(int i); // ������� ������� 
  int geta (); 
  void reset();
};

void myclass::setab(int i){
  a = i; // ����� ��������� ��� ������������ � 
  b = i*i; // ����� ��������� ��� ������������ b
}

int myclass::geta(){
 return a;
} // ����� ��������� ��� ������������ �

void myclass::reset(){
// ����� ��������� �� ��������� setab() �� ���� �������� �����.
  setab(0);
} 

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass ob;
  ob.setab(5); // �������� ��������� �� ����� ob.a � ob.b. 
  cout<< "������� ob ���� ��������� �� ������� setab(5): "; 
  cout<< ob.geta() <<' ';
  cout<< ob.b << '\n'; // ����� ���� ������ �� b ������ ��� � public-����.
  ob.b = 20; // ������ b ���� �� �� ������ �����, ������ ��� � public-����, 
  cout<< "������� ob ���� �������� �� �������� 20 �� b: "; 
  cout <<ob.geta()<< " " << ob.b << '\n';
  ob.reset ();
  cout<< "������� ob ���� ��������� �� ������� ob.reset(): "; 
  cout << ob.geta() << ' ' << ob.b << '\n'; // ��������� ����-�������, ����� �� ���������� ��� ���.
  return 0;
}
