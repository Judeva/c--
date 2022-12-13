// ������������� �� ����������� �� devC++ ���
// ����������� �� cmd (command line window)
#include <iostream> 
#include <string.h> 
#include <vector> 
using namespace std;
// ���������- prototypes
char encode( char c);// the basic function
char* encode(char *s);
string& encode(string& s);
vector<char> encode(vector<char> v);
	
char encode(char c){
  	switch (c) { 
// Capital cyrillic letters
   	case '\200': c = '�'; break;
   	case '\201': c = '�'; break;
   	case '\202': c = '�'; break;
   	case '\203': c = '�'; break;
   	case '\204': c = '�'; break;
   	case '\205': c = '�'; break;
   	case '\206': c = '�'; break;
   	case '\207': c = '�'; break;
   	case '\210': c = '�'; break;
   	case '\211': c = '�'; break;
   	case '\212': c = '�'; break;
   	case '\213': c = '�'; break;
   	case '\214': c = '�'; break;
   	case '\215': c = '�'; break;
   	case '\216': c = '�'; break;
   	case '\217': c = '�'; break;
   	case '\220': c = '�'; break;
   	case '\221': c = '�'; break;
   	case '\222': c = '�'; break;
   	case '\223': c = '�'; break;
   	case '\224': c = '�'; break;
   	case '\225': c = '�'; break;
   	case '\226': c = '�'; break;
   	case '\227': c = '�'; break;
  	case '\230': c = '�'; break;
   	case '\231': c = '�'; break;
   	case '\232': c = '�'; break;
	case '\233': c = '�'; break;
   	case '\234': c = '�'; break;
	case '\235': c = '�'; break;
   	case '\236': c = '�'; break;
   	case '\237': c = '�'; break;
// small Cyrillic letters	
  	case '\240': c = '�'; break;
   	case '\241': c = '�'; break;
   	case '\242': c = '�'; break;
   	case '\243': c = '�'; break;
   	case '\244': c = '�'; break;
   	case '\245': c = '�'; break;
   	case '\246': c = '�'; break;
   	case '\247': c = '�'; break;
   	case '\250': c = '�'; break;
   	case '\251': c = '�'; break;
   	case '\252': c = '�'; break;
   	case '\253': c = '�'; break;
   	case '\254': c = '�'; break;
   	case '\255': c = '�'; break;
   	case '\256': c = '�'; break;
   	case '\257': c = '�'; break;
   	case '\340': c = '�'; break;
   	case '\341': c = '�'; break;
   	case '\342': c = '�'; break;
   	case '\343': c = '�'; break;
   	case '\344': c = '�'; break;
   	case '\345': c = '�'; break;
   	case '\346': c = '�'; break;
   	case '\347': c = '�'; break;
  	case '\350': c = '�'; break;
   	case '\351': c = '�'; break;
   	case '\352': c = '�'; break;
  	case '\353': c = '�'; break;
   	case '\354': c = '�'; break;
	case '\355': c = '�'; break;
   	case '\356': c = '�'; break;
   	case '\357': c = '�'; break;
// special (rare used) Russian letters
	case '\360': c = '�'; break;
	case '\361': c = '�'; break;
	} // switch
	return c;
 }
 
char* encode(char *s){
  for (int i = 0;i<strlen(s);i++){
  	s[i] = encode(s[i]);
  }
  return s;
}// encode()

string& encode(string& s){
  for (unsigned int i=0; i<s.size(); i++){
  	s[i] = encode(s[i]);
  }
  return s;
}// encode()

vector<char> encode(vector<char> v){
  for (int i=0; i<v.size(); i++){
  	v[i] = encode(v[i]);
  }
  return v;
}

