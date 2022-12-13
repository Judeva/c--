// Програма Prog2_9.cpp е подобна на Prog2_8.cpp, но с  
// умишлена грешка породена при връщане на обект от функция
#include <iostream>
#include <cstring>
using namespace std;

class sample { 
  char *s; 
public:
  sample() { s = 0; }
  ~sample() { 
  	cout << "\nВ деструктора &s = "<< &s << "\n";
  	cout << "&s[0] = " << (void*)&s[0] << "  &s[1] = " <<(void*) &s[1] << endl;
	if (s) delete []s;
	cout << "След освобождаване на s-паметта. &s = " 
	  << &s << "  &s[0] = " << (void*)&s[0] << "\n";
	  cout << " s[0] = " << &s[0] << "\n\n";
  }
  void show() { cout << s << "\n"; }
  void set(char *str);
};
// заделяме памет за private члена и копираме.
void sample::set(char *str){
	s = new char[strlen(str)+1]; 
	strcpy(s, str);
}
// Тая функция връща обект от типа sample, 
sample input(){
  char instr[80]; 
  sample str;
  cout << "Въведете низ: "; 
  gets(instr); // cin >> instr; //  защо gets е по-добра ?!
  str.set(instr) ; 
  return str;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  sample ob;
// Присвояваме обекта, връщан от функцията input() на обекта ob
  ob = input(); // Тая инструкция генерира грешката!!
  ob.show(); // Извежда "боклук".
}
