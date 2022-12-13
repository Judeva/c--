// �������� Prog2_12.cpp 
// ������������� �� ����� �� ������� ��� ��������� �� ��������
// ����� � ���������� �� �� ��������, ������� �� �������.
// !!!  ����� � devC++ ���������� ����������� �� �� ����
// ������ ��� Visual Studio ��� �� ������� !
#include <iostream>
using namespace std;
class myclass { 
public:
  int *p; 
  myclass(int i) {  
    p = new int;
    *p = i;
    cout << "In usual constructor.\n"; 
  }
  myclass(const myclass &obj) {// ����������� �� �����
	p = new int;
	*p = (*obj.p+1); // �������� �� �������
	cout << "in copy constructor &(obj.p)=" << &(obj.p) << endl;
	cout << "in copy constructor (obj.p)=" << (obj.p) << endl;
	cout << "in copy constructor *(obj.p)=" << *(obj.p) << endl;
	cout << "in copy constructor &p=" << &p << endl;
	cout << "in copy constructor p=" << p << endl;
	cout << "in copy constructor *p=" << *p << endl;
  } 
};
myclass f(){
  myclass ob(8);  // ������� �� ������������ �����������,  
  cout <<"in f    &p="<<&(ob.p) << endl;
  cout <<"in f    p="<<ob.p << endl;
  return ob; // ������ �� ������� ������������ �� �����, �� �� ��� ������ ����� �� ����������
}
int main(){
  myclass a(7); // ������� �� ������������ �����������, 
  cout <<"in main &p="<<&(a.p) << endl;
  cout <<"in main p="<<a.p<< endl;
  cout <<"a="<<*a.p << endl<<endl;
  a = f(); // ������� �� ������������ �� �����, �� �� ��� ������ ����� �� ����������
  cout <<"in main &p="<<&(a.p) << endl;
  cout <<"in main p="<<a.p<< endl;
  cout <<"a="<<*a.p << endl;
  return 0;
}
