// �������� Prog2_1.cpp
// ������������ �� ���������� �� �������-"�������".
#include <iostream> 
using namespace std;

class myclass { 
  int a, b; 
public:
  myclass(int i, int j) { a=i; b=j ;}
  friend int sum(myclass x); // ��������� sum() � ������� �� ����� myclass.
};

// ! ��������� sum() �� � ���� �� ���� ����  ���� 
int sum(myclass x){
	return x.a + x.b;
}

int main(){
  myclass ob (5, 6);
  cout << sum(ob);
  return 0;
}
