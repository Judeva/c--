// Програма Prog1_2.cpp
// Демонстрация на достъпа към членовете на един клас.
#include <iostream> 
using namespace std;

class myclass {
  int a; // скрити данни
public: 
  int b; // открити данни 
  void setab(int i); // открити функции 
  int geta (); 
  void reset();
};

void myclass::setab(int i){
  a = i; // пряко обръщение към променливата а 
  b = i*i; // пряко обръщение към променливата b
}

int myclass::geta(){
 return a;
} // пряко обръщение към променливата а

void myclass::reset(){
// Пряко извикване на функцията setab() за вече известен обект.
  setab(0);
} 

int main(){
  setlocale (LC_ALL, "Bulgarian");
  myclass ob;
  ob.setab(5); // Задаваме членовете на данни ob.a и ob.b. 
  cout<< "Обектът ob след извикване на функция setab(5): "; 
  cout<< ob.geta() <<' ';
  cout<< ob.b << '\n'; // имаме пряк достъп до b защото той е public-член.
  ob.b = 20; // Членът b може да се зададе пряко, защото той е public-член, 
  cout<< "Обектът ob след задаване на стойност 20 на b: "; 
  cout <<ob.geta()<< " " << ob.b << '\n';
  ob.reset ();
  cout<< "Обектът ob след извикване на функция ob.reset(): "; 
  cout << ob.geta() << ' ' << ob.b << '\n'; // направете член-функция, която да разпечатва тоя ред.
  return 0;
}
