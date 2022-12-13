// �������� Prog2_9.cpp � ������� �� Prog2_8.cpp, �� �  
// �������� ������ �������� ��� ������� �� ����� �� �������
#include <iostream>
#include <cstring>
using namespace std;

class sample { 
  char *s; 
public:
  sample() { s = 0; }
  ~sample() { 
  	cout << "\n� ����������� &s = "<< &s << "\n";
  	cout << "&s[0] = " << (void*)&s[0] << "  &s[1] = " <<(void*) &s[1] << endl;
	if (s) delete []s;
	cout << "���� ������������� �� s-�������. &s = " 
	  << &s << "  &s[0] = " << (void*)&s[0] << "\n";
	  cout << " s[0] = " << &s[0] << "\n\n";
  }
  void show() { cout << s << "\n"; }
  void set(char *str);
};
// �������� ����� �� private ����� � ��������.
void sample::set(char *str){
	s = new char[strlen(str)+1]; 
	strcpy(s, str);
}
// ��� ������� ����� ����� �� ���� sample, 
sample input(){
  char instr[80]; 
  sample str;
  cout << "�������� ���: "; 
  gets(instr); // cin >> instr; //  ���� gets � ��-����� ?!
  str.set(instr) ; 
  return str;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  sample ob;
// ����������� ������, ������ �� ��������� input() �� ������ ob
  ob = input(); // ��� ���������� �������� ��������!!
  ob.show(); // ������� "������".
}
