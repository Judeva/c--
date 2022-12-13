// Програма Prog2_4.cpp
// Демонстрация на присвояване на обекти.
#include <iostream> 
using namespace std;

class myclass { 
  int a, b; 
public:
  void setab(int i, int j) { a = i; b = j; } 
  void showab();
};
void myclass::showab(){
  cout << "а равно на " << a << '\n'; 
  cout << "b равно на " << b << '\n'; 
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass ob1, ob2;
  ob1.setab(10, 20); 
  ob2.setab(0, 0);
  
  cout << "Обект ob1 до присвояването:\n"; 
  ob1.showab();
  cout << "\nОбект ob2 до присвояването:\n"; 
  ob2.showab();
  cout << '\n';
  
  ob2 = ob1;  // Присвояваме обекта ob1 на обекта ob2. 
  cout << "\nОбект ob1 след присвояването:\n";
  ob1.showab();
  cout << "\nОбект ob2 след присвояването:\n"; 
  ob2.showab();
}
