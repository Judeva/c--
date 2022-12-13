// ������ ����� �������� Prog1_1.cpp
#include <iostream> 
#include "cmd_encoding.h"
using namespace std;

class queue { // �������� �� ����� queue
   int q[100] ; 
   int sloc, rloc; 
public:
	void init (); 
	void qput(int i); 
	int qget();
};// ���������� ������� ���� ����������� �� �����

void queue::init(){// ������������� �� ����� queue
	rloc = sloc = 0;
}
 
void queue::qput(int i){// ������ � �������� ����������� ��������
	if(sloc==100) {
		cout << reencode("�������� � ���������.\n"); return;
	}
	sloc++; q[sloc] = i;
}

int queue::qget() {// ������� �� �������� ����������� ��������
	if (rloc == sloc) {
		reencode("�������� � ������.\n"); return 0;
	}
	rloc++;
	return q[rloc];
}

int main(){
	queue a, b; // ������� ��� ������ �� ����� queue.
	a.init(); 
	b.init() ;
	a.qput(10); 
	b.qput(19);
	a.qput(20);
	b.qput(1);
	cout << reencode("���������� �� �������� a: "); 
	cout<<a.qget()<<" ";
	cout<<a.qget()<<"\n";
	cout << reencode("���������� �� �������� b: "); 
	cout<<b.qget()<<" ";
	cout<<b.qget()<<"\n" ;
	return 0;
}

