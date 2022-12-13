// Програма Prog2_8.cpp е пример за функция, която връща обект.
// В примера няма конструктори и деструктори
#include <iostream>
#include <cstring> 
#include "cmd_encoding.h"
using namespace std;

class sample { 
  char s[80]; 
public:
  void show() { cout << s << "\n"; }
  void set(char *str) { strcpy(s, str); }
};

sample input(){
  char instr[80]; 
  sample str;
  
  cout << reencode("Въведете низ: ");
  gets(instr);
  str.set(instr) ;
  return str;
}

int main(){
  sample ob;
// Присвояваме обекта, връщан от функцията input() на обекта ob
  ob = input(); 
  ob.show();
} 
