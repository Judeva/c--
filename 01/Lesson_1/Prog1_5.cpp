// �������� Prog1_5.cpp
// ��������� �� ���� ��� ������ �� ����������.
#include <iostream> 
using namespace std;

union u_type {
  short int i; 
  char ch[2];
  
  u_type(short int a); // ������� ������� �� ������������
  void showchars (); 
};

// �����������
u_type::u_type(short int a){
 i = a;
}

// ������� ���������, ��������� ���������� �� ���� short int. 
void u_type::showchars() {
  cout << ch[1] ;
  cout << ch[0] ;
}

int main(){
 // u_type u(89); 
//  u.showchars(); 
 u_type u(1000);
  u_type u2(17473); 
  u.showchars(); 
  return 0;
}
