// �������� Prog1_3.cpp
// ������������ �� ������������ �� ����������� � ����������.
#include <iostream> 
using namespace std;

// ����������� �� ����� queue 
class queue { 
  int q[100]; 
  int sloc, rloc; 
public: 
  queue(); // �����������
  ~queue(); // ���������� 
  void qput(int i); 
  int qget();
};

// ����������� �� ������������
queue::queue (){
  sloc = rloc = 0;
  cout << "�������� � ��������������.\n";
}
// ����������� �� ����������� 
queue::~queue(){
  cout << "�������� � ���������.\n";
}

// ������ � �������� ����������� ��������
void queue::qput(int i){
	if(sloc==100) {
		cout << "�������� � ���������.\n"; 
		return;
	}
	sloc++; q[sloc] = i ;
}

// ������� �� �������� ����������� ��������
int queue::qget(){
	if(rloc == sloc) {
		cout << "�������� � ������.\n"; 
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main(){
	setlocale (LC_ALL, "Bulgarian");
	queue a, b; // ������� ��� ������ �� ����� queue.
	a.qput(20); 
	b.qput(29) ;
	a.qput(10); 
	b.qput(17);
	cout << a.qget() << " ";
	cout << a.qget() << " ";
	cout << b.qget() << " ";
	cout << b.qget() << "\n";
	return 0;
}
