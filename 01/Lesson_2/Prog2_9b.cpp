// �������� Prog2_9b.cpp � ������� �� Prog2_8.cpp, �� �  
// �������� ������ �������� ��� ������� �� ����� �� �������
#include <iostream>
#include <cstring>
using namespace std;

class sample { 
  short *pd; 
public:
  sample() { pd = NULL; }
  ~sample() { 
  	cout << "� ����������� &pd = "<< &pd << "\n";
  	cout << "pd = " << pd << " pd[0] = " << pd[0]<< 
	   " pd[1] = " << pd[1] << endl;
//	if (pd)
	  delete []pd;
	cout << "���� ������������� �� pd-�������. pd = " 
	    << pd << " pd[0] = " << pd[0]<< 
	   " pd[1] = " << pd[1] << endl;

	pd = nullptr;
  }
  void show() { cout << "\n��� show: pd[0] = " << pd[0] << 
  	"  pd[1] = " << pd[1] << "\n\n"; 
  }
  void set(short a, short b);
};
// �������� ����� �� private ����� � ��������.
void sample::set(short a, short b){
	short * pa = new short int[3]; 
	pa[0] = a;
	pa[1] = b;
	pd = pa;
}
// ��� ������� ����� ����� �� ���� sample, 
sample input(){
  sample masiv;
  masiv.set(7, 9) ; 
  return masiv;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  sample ob;
// ����������� ������, ������ �� ��������� input() �� ������ ob
  ob = input(); // ��� ���������� �������� ��������!!
  ob.show(); // ������ �� �� ������� "������". �� ������ �����!
}
