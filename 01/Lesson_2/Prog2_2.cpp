// Програма Prog2_2.cpp
// Използване на функция-"приятел" в два класа.
#include <iostream> 
using namespace std;

const int IDLE=0; 
const int INUSE=1;

class C2; // изпреварващо обявление 
class C1 {
  int status;// IDLE, ако съобщението е неактивно,
  			 // INUSE, ако съобщението е изведено на екран.
public:
  void set_status(int state); 
  friend int idle(C1 a, C2 b); 
};

class C2 {
  int status; // смисълът му е същият, както в клас C1,
public:
  void set_status(int state); 
  friend int idle(C1 a, C2 b);
};

void C1::set_status(int state){
	status = state; 
}

void C2::set_status(int state) {
  status = state;
}

int idle(C1 a, C2 b){// Функция idle() е "приятел" на класовете C1 и C2.
  if (a.status || b.status) return 0; 
  else return 1;
}

int main() {
  setlocale (LC_ALL, "Bulgarian");
  C1 x; 
  C2 y;
  
  x.set_status(IDLE);
  y.set_status(IDLE);
  if (idle(x, y)) cout << "Екранът е свободен.\n"; 
  else  cout << "Показва се съобщение.\n";
  
  x.set_status(INUSE) ;
  if (idle(x, y)) cout << "Екранът е свободен.\n"; 
  else cout << "Показва се съобщение.\n";
}	
	
