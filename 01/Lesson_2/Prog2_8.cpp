// �������� Prog2_8.cpp � ������ �� �������, ����� ����� �����.
// � ������� ���� ������������ � �����������
#include <iostream>
#include <cstring> 
#include "cmd_encoding.h"
using namespace std;

class sample { 
  char s[80]; 
public:
  void show() { cout << s << "\n"; }
  void set(char *str) { strcpy(s, str); }
};

sample input(){
  char instr[80]; 
  sample str;
  
  cout << reencode("�������� ���: ");
  gets(instr);
  str.set(instr) ;
  return str;
}

int main(){
  sample ob;
// ����������� ������, ������ �� ��������� input() �� ������ ob
  ob = input(); 
  ob.show();
} 
