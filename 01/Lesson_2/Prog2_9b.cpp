// Програма Prog2_9b.cpp е подобна на Prog2_8.cpp, но с  
// умишлена грешка породена при връщане на обект от функция
#include <iostream>
#include <cstring>
using namespace std;

class sample { 
  short *pd; 
public:
  sample() { pd = NULL; }
  ~sample() { 
  	cout << "В деструктора &pd = "<< &pd << "\n";
  	cout << "pd = " << pd << " pd[0] = " << pd[0]<< 
	   " pd[1] = " << pd[1] << endl;
//	if (pd)
	  delete []pd;
	cout << "След освобождаване на pd-паметта. pd = " 
	    << pd << " pd[0] = " << pd[0]<< 
	   " pd[1] = " << pd[1] << endl;

	pd = nullptr;
  }
  void show() { cout << "\nВъв show: pd[0] = " << pd[0] << 
  	"  pd[1] = " << pd[1] << "\n\n"; 
  }
  void set(short a, short b);
};
// заделяме памет за private члена и копираме.
void sample::set(short a, short b){
	short * pa = new short int[3]; 
	pa[0] = a;
	pa[1] = b;
	pd = pa;
}
// Тая функция връща обект от типа sample, 
sample input(){
  sample masiv;
  masiv.set(7, 9) ; 
  return masiv;
}

int main(){
  setlocale (LC_ALL, "Bulgarian");
  sample ob;
// Присвояваме обекта, връщан от функцията input() на обекта ob
  ob = input(); // Тая инструкция генерира грешката!!
  ob.show(); // Очаква се да извежда "боклук". Но работи добре!
}
