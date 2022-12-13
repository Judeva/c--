// �������� Prog2_3.cpp
// � ������ �� ������������� ������������.
#include <iostream>
#include <cstdlib>
#include <ctime> // ������ clock () � CLOCKS_PER_SEC
using namespace std;

class timer{ 
  int seconds; 
public:
// �������, �������� ��� ��� �� ��� 
  timer(char *t) { seconds = atoi (t); }
// �������, �������� ��� ��� �� ���� ����� 
  timer(int t) { seconds = t; }
// �����, �������� � ������ � ������� �� ������������� � �������
  timer(int min, int sec) { seconds = min*60 + sec; }
  void run ();
} ;

void timer::run(){
 clock_t tl;
 tl = clock();
// cout << "t1 = " << tl << endl;
 while ( (clock()/CLOCKS_PER_SEC - tl/CLOCKS_PER_SEC) < seconds);
// cout << "clock() = " << clock() << endl; 
 cout<< "\a"; // ������ ������
}
/*
 int main() {
  timer a (4), b("10"), c(1, 7);
  a.run(); // �������� 4 �������
  b.run(); // �������� 10 �������
  c.run(); // �������� 1 ������ � 7 �������
  return 0;
}  */

int main() {
  setlocale (LC_ALL, "Bulgarian");
  
  timer a(5);  // �������� �������������
  a.run(); // ������� �������
  
  char str[80]; 
  cout << "�������� ���� �������: ";  
  cin >> str;
  timer b(str); // ��������� �������������
  b.run();
  
  cout << "�������� ������ � �������: ";
  int min, sec;
  cin >> min >> sec;
  timer c(min, sec); // ��������� �������������
  c.run();
}

