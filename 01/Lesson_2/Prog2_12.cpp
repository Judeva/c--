// Програма Prog2_12.cpp 
// Конструкторът на копие се извиква при създаване на временен
// обект в качеството му на стойност, връщана от функция.
// !!!  Обаче в devC++ копиращият конструктор не се вика
// Докато във Visual Studio той се извиква !
#include <iostream>
using namespace std;
class myclass { 
public:
  int *p; 
  myclass(int i) {  
    p = new int;
    *p = i;
    cout << "In usual constructor.\n"; 
  }
  myclass(const myclass &obj) {// конструктор на копие
	p = new int;
	*p = (*obj.p+1); // стойност на копието
	cout << "in copy constructor &(obj.p)=" << &(obj.p) << endl;
	cout << "in copy constructor (obj.p)=" << (obj.p) << endl;
	cout << "in copy constructor *(obj.p)=" << *(obj.p) << endl;
	cout << "in copy constructor &p=" << &p << endl;
	cout << "in copy constructor p=" << p << endl;
	cout << "in copy constructor *p=" << *p << endl;
  } 
};
myclass f(){
  myclass ob(8);  // Извиква се обикновеният конструктор,  
  cout <<"in f    &p="<<&(ob.p) << endl;
  cout <<"in f    p="<<ob.p << endl;
  return ob; // Неявно се извиква конструктора на копие, но не във всички среди за разработка
}
int main(){
  myclass a(7); // Извиква се обикновеният конструктор, 
  cout <<"in main &p="<<&(a.p) << endl;
  cout <<"in main p="<<a.p<< endl;
  cout <<"a="<<*a.p << endl<<endl;
  a = f(); // Извиква се конструктора на копие, но не във всички среди за разработка
  cout <<"in main &p="<<&(a.p) << endl;
  cout <<"in main p="<<a.p<< endl;
  cout <<"a="<<*a.p << endl;
  return 0;
}
