// Програма Prog1_3.cpp
// Демонстрация на използването на конструктор и деструктор.
#include <iostream> 
using namespace std;

// Определение на класа queue 
class queue { 
  int q[100]; 
  int sloc, rloc; 
public: 
  queue(); // конструктор
  ~queue(); // деструктор 
  void qput(int i); 
  int qget();
};

// Определение на конструктора
queue::queue (){
  sloc = rloc = 0;
  cout << "Опашката е инициализирана.\n";
}
// Определение на деструктора 
queue::~queue(){
  cout << "Опашката е разрушена.\n";
}

// Занася в опашката целочислена стойност
void queue::qput(int i){
	if(sloc==100) {
		cout << "Опашката е запълнена.\n"; 
		return;
	}
	sloc++; q[sloc] = i ;
}

// Извлича от опашката целочислена стойност
int queue::qget(){
	if(rloc == sloc) {
		cout << "Опашката е празна.\n"; 
		return 0;
	}
	rloc++;
	return q[rloc];
}

int main(){
	setlocale (LC_ALL, "Bulgarian");
	queue a, b; // Създава два обекта от класа queue.
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
