// Програма Prog2_11.cpp  
// Извикване на конструктора на копие за инициализация на обект 
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
// коментирайте копиращия конструктор и наблюдавайте разликите
myclass::myclass(const myclass &ob){// конструктор на копие
  cout << "Заделяне на p-памет от конструктора на копие.\n";
  p = new int;
  *p = *ob.p; // стойност на копието
}
myclass::myclass(int i){// обикновен конструктор 
  cout << "Заделяне на p-памет от обикновения конструктор.\n"; 
  p = new int;
  *p = i;
}
myclass::~myclass(){
  cout << "Освобождаване на р-паметта.\n"; 
  cout << "&p = " << &p << "  p = " << p << "  *p = " << *p << "\n\n";
  delete p;
}
int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass a(10); // Извиква се обикновеният конструктор, 
//  myclass c(7); // Извиква се обикновеният конструктор, 
//  a = c; // понеже не се вика копиращия конструктор при тая инструкция програмата гърми
  myclass b = a; // Извиква се конструкторът на копие, 
  return 0;
}

