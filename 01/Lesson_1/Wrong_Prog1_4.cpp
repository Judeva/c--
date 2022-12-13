// ������ ������� �� �������� Prog1_4.cpp
// ��� ����������� � main()
// ������������ �� �������� �� ��������� ��� �����������.
#include <iostream> 
using namespace std;

const int N = 5;
// ����������� �� ����� queue, 
class queue { 
  int q[5]; 
  int sloc, rloc; 
  int num; // ������� ���������������� ����� �� �������� 
public:
  queue(int id); // �������������� �����������
  ~queue(); // ���������� 
  void qput(int i);  
  int qget();
};

// ����������� �� ������������, 
queue::queue(int id){
	sloc = rloc = 0; 
	num = id;
	cout << "������ " << num
	<< " � ��������������.\n";
}
// ����������� �� �����������, 
queue::~queue(){
	cout << "������ " << num << " � ���������.\n";
}

// ������ � �������� ����������� �������� 
void queue::qput(int i){
	cout << "sloc = " << sloc ;
	if (sloc >= N) {
		cout << ", ������ " << num << " e ���������, "
		<< "�� ����� �� ������� ������� " << i << "\n";
		return;
	}
	cout << endl;
	sloc++; 
	q[sloc] = i;
}

// ������� ��  �������� ����������� ��������, 
int queue::qget(){
//	cout << "num = " << num << "  rloc = " << rloc  <<  "sloc = " << sloc  << endl;
	if (rloc == sloc) {
		cout << "�������� " << num << " � ������.\n"; 
		return 0;
	}
	rloc++; 
	return q[rloc];
}

int main (){
	setlocale (LC_ALL, "Bulgarian");
//	queue a = queue(1); queue b = queue(2); // ���-������� �������, ����� �� ��������
//	queue a(1), b(2); // ������� ��� ������ �� ����� queue.
	queue a=1, b=2; // ���� ����� �� ������������� (�������� �� ������ ����� ���� ���� ��������.)
	a.qput(20);
	a.qput(21);
	a.qput(22);
	a.qput(23);
// ������ ��������� ���������� ���� �������� (��� ������ �� �������� 
// ���� 5) sloc ����� ����� �� 5, �� q[5] � ����� ��������� �� ������ �
// �������� ����� � ������� �� ������ sloc. ����� �� ����� �� �����������
// �� �����, �� sloc � ����� ���� ������ q[]. ������ ������ ��� 
// ���������� �������� �� sloc �������� �������� � ����� 24.
	a.qput(24);
	a.qput(25);
	a.qput(26);
// ���� �� �������� � ������� ������
	b.qput(29);
	b.qput (17) ;
	cout << a.qget() << "\n"; 
	cout << a.qget() << "\n"; 
// ������� ����� �� ������� ������ ������
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	return 0;
}
