// Програма Prog1_6.cpp
// Пример за използване на масив от обекти.
#include <iostream> 
using namespace std;

enum resolution {low, medium, high};
char names[3][8] = {
  "нисък", "среден", "висок", //  тук запетаята не дава грешка!
} ; 

class display { 
  int width; 
  int height; 
  resolution res; 
public:
  void set_dim(int w, int h) {width = w; height = h;} 
  void get_dim(int &w, int &h) {w = width; h = height;} 
  void set_res(resolution r) {res = r;} 
  resolution get_res() {return res;}
};

int main (){
  setlocale (LC_ALL, "Bulgarian");
  display display_mode[3]; 
  int w, h;
  
  display_mode[0].set_res(low); 
  display_mode[0].set_dim(640, 480);
  display_mode[1].set_res(medium); 
  display_mode[1].set_dim(800, 600);
  display_mode[2].set_res(high); 
  display_mode[2].set_dim(1600, 1200);
  
  cout << "Възможни режими на показване не данни:\n\n";
  for(int i=0; i<3; i++) {
	cout << names[display_mode[i].get_res()];
	cout<< ":\t"; 
	display_mode[i].get_dim(w, h); // да си припомним псевдонимите
	cout << w << " x " << h << "\n";
  }
  return 0;
}
