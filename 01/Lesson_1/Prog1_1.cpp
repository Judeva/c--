// Нашата първа програма Prog1_1.cpp
#include <iostream> 
#include "cmd_encoding.h"
using namespace std;

class queue { // Описание на класа queue
   int q[100] ; 
   int sloc, rloc; 
public:
	void init (); 
	void qput(int i); 
	int qget();
};// забележете точката след дефиницията на класа

void queue::init(){// Инициализация на класа queue
	rloc = sloc = 0;
}
 
void queue::qput(int i){// Вкарва в опашката целочислена стойност
	if(sloc==100) {
		cout << reencode("Опашката е запълнена.\n"); return;
	}
	sloc++; q[sloc] = i;
}

int queue::qget() {// Извлича от опашката целочислена стойност
	if (rloc == sloc) {
		reencode("Опашката е празна.\n"); return 0;
	}
	rloc++;
	return q[rloc];
}

int main(){
	queue a, b; // Създава два обекта от класа queue.
	a.init(); 
	b.init() ;
	a.qput(10); 
	b.qput(19);
	a.qput(20);
	b.qput(1);
	cout << reencode("Съдържание на опашката a: "); 
	cout<<a.qget()<<" ";
	cout<<a.qget()<<"\n";
	cout << reencode("Съдържание на опашката b: "); 
	cout<<b.qget()<<" ";
	cout<<b.qget()<<"\n" ;
	return 0;
}

