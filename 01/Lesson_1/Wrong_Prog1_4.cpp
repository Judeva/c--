// Грешен вариант на програма Prog1_4.cpp
// Виж коментарите в main()
// Демонстрация на подаване на аргументи към конструктор.
#include <iostream> 
using namespace std;

const int N = 5;
// Определение на класа queue, 
class queue { 
  int q[5]; 
  int sloc, rloc; 
  int num; // съдържа идентификационен номер на опашката 
public:
  queue(int id); // параметризиран конструктор
  ~queue(); // деструктор 
  void qput(int i);  
  int qget();
};

// Определение на конструктора, 
queue::queue(int id){
	sloc = rloc = 0; 
	num = id;
	cout << "Опашка " << num
	<< " е инициализирана.\n";
}
// Определение на деструктора, 
queue::~queue(){
	cout << "Опашка " << num << " е разрушена.\n";
}

// Занася в опашката целочислена стойност 
void queue::qput(int i){
	cout << "sloc = " << sloc ;
	if (sloc >= N) {
		cout << ", Опашка " << num << " e запълнена, "
		<< "не можем да вмъкнем числото " << i << "\n";
		return;
	}
	cout << endl;
	sloc++; 
	q[sloc] = i;
}

// Извлича от  опашката целочислена стойност, 
int queue::qget(){
//	cout << "num = " << num << "  rloc = " << rloc  <<  "sloc = " << sloc  << endl;
	if (rloc == sloc) {
		cout << "Опашката " << num << " е празна.\n"; 
		return 0;
	}
	rloc++; 
	return q[rloc];
}

int main (){
	setlocale (LC_ALL, "Bulgarian");
//	queue a = queue(1); queue b = queue(2); // най-дългият вариант, рядко се използва
//	queue a(1), b(2); // Създава два обекта на класа queue.
	queue a=1, b=2; // Друг начин за инициализация (Използва се когато имаме само един аргумент.)
	a.qput(20);
	a.qput(21);
	a.qput(22);
	a.qput(23);
// Когато записваме следващата пета стойност (при размер на опашката 
// също 5) sloc става равно на 5, но q[5] е извън границите на масива и
// всъщност пишем в паметта на самото sloc. Лесно се вижда от обявлението
// на класа, че sloc е точно след масива q[]. Затова именно при 
// следващото печатане на sloc неговата стойност е точно 24.
	a.qput(24);
	a.qput(25);
	a.qput(26);
// сега ще поставим в другата опашка
	b.qput(29);
	b.qput (17) ;
	cout << a.qget() << "\n"; 
	cout << a.qget() << "\n"; 
// взимаме числа от втората опашка надолу
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	cout << b.qget() << "\n";
	return 0;
}
