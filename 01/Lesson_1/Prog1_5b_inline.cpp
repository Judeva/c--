// �������� Prog1_5b.cpp
// � ������ �� ��� inline  ����-�������
#include <iostream> 
using namespace std;

class cl {
  int i; // ������ ���� �� ������������
public: // ����������� inline ������� 
  int get_i() { return i; } 
  void put_i(int j) { i = j; }
} ;

//void cl::put_i(int j) { i = j; } // ���� �����, �� ����� �� � inline 

int main(){
  cl a;
  a.put_i(7);
  cout << a.get_i() << endl;
  return 0;
}
