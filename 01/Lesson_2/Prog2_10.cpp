// Програма Prog2_10.cpp Използване на копиращ
// конструктор при предаване на параметри към функция.
#include <iostream>
#include <cstdlib> 
using namespace std;

class myclass { 
  int *p; 
public:
  myclass(int i); // обикновен конструктор
  myclass(const myclass &ob); // конструктор на копие
  ~myclass();
  int getval() { return *p; }
};

// Конструктор на копие.
myclass::myclass(const myclass &obj){
  p = new int;
  cout << "\nВ конструкторa на копието:\n" << 
  	"Към какво сочи р след алокацията => "<<*p<<"\n";
  *p = *obj.p; // стойността на копието
  cout << "Към какво сочи р след присвояването => "<<*p<<"\n";
}
// Обикновен конструктор, 
myclass::myclass(int i){
  cout << "В обикновения конструктор:\n"  << 
  	"Заделяне на памет, сочена от указателя p.\n"; 
  p = new int;
  *p = i;
  cout << "Към какво сочи р след присвояването => "<<*p<<"\n";
}
// Тая функция приема един обект-параметър, 
void display(myclass ob){
  cout << "\nВъв display = " << ob.getval() << '\n';
}
myclass::~myclass(){
  cout << "\nОсвобождаване на паметта, сочена от указателя p.\n"; 
  delete p;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); 
  display(a); 
  cout << "\nmain() още не е завършила!\n";
}
