// Програма Prog2_3.cpp
// е пример за презареждаеми конструктори.
#include <iostream>
#include <cstdlib>
#include <ctime> // заради clock () и CLOCKS_PER_SEC
using namespace std;

class timer{ 
  int seconds; 
public:
// секунди, задавани във вид на низ 
  timer(char *t) { seconds = atoi (t); }
// секунди, задавани във вид на цяло числа 
  timer(int t) { seconds = t; }
// време, задавано в минути и секунди го преобразуваме в секунди
  timer(int min, int sec) { seconds = min*60 + sec; }
  void run ();
} ;

void timer::run(){
 clock_t tl;
 tl = clock();
// cout << "t1 = " << tl << endl;
 while ( (clock()/CLOCKS_PER_SEC - tl/CLOCKS_PER_SEC) < seconds);
// cout << "clock() = " << clock() << endl; 
 cout<< "\a"; // звуков сигнал
}
/*
 int main() {
  timer a (4), b("10"), c(1, 7);
  a.run(); // отброява 4 секунди
  b.run(); // отброява 10 секунди
  c.run(); // отброява 1 минута и 7 секунди
  return 0;
}  */

int main() {
  setlocale (LC_ALL, "Bulgarian");
  
  timer a(5);  // статична инициализация
  a.run(); // пускаме таймера
  
  char str[80]; 
  cout << "Въведете броя секунди: ";  
  cin >> str;
  timer b(str); // динамична инициализация
  b.run();
  
  cout << "Въведете минути и секунди: ";
  int min, sec;
  cin >> min >> sec;
  timer c(min, sec); // динамична инициализация
  c.run();
}

