// ������������� �� ����������� �� devC++ ���
// ����������� �� cmd (command line window)
#include <iostream> 
#include <string.h> 
#include <string> 
#include <vector> 
using namespace std;
// ���������- prototypes
char reencode(char c);// the basic function
string reencode(const char *s);
string& reencode(string &str);
char* reencode(char *s);
void reencode(vector<char> &v);// ��� ��������� �� void  ������

char reencode(char c){
  	switch (c) { 
// Capital cyrillic letters
   	case '�': c = '\200'; break;
   	case '�': c = '\201'; break;
   	case '�': c = '\202'; break;
   	case '�': c = '\203'; break;
   	case '�': c = '\204'; break;
   	case '�': c = '\205'; break;
   	case '�': c = '\206'; break;
   	case '�': c = '\207'; break;
   	case '�': c = '\210'; break;
   	case '�': c = '\211'; break;
   	case '�': c = '\212'; break;
   	case '�': c = '\213'; break;
   	case '�': c = '\214'; break;
   	case '�': c = '\215'; break;
   	case '�': c = '\216'; break;
   	case '�': c = '\217'; break;
   	case '�': c = '\220'; break;
   	case '�': c = '\221'; break;
   	case '�': c = '\222'; break;
   	case '�': c = '\223'; break;
   	case '�': c = '\224'; break;
   	case '�': c = '\225'; break;
   	case '�': c = '\226'; break;
   	case '�': c = '\227'; break;
  	case '�': c = '\230'; break;
   	case '�': c = '\231'; break;
   	case '�': c = '\232'; break;
	case '�': c = '\233'; break;
   	case '�': c = '\234'; break;
	case '�': c = '\235'; break;
   	case '�': c = '\236'; break;
   	case '�': c = '\237'; break;
// small Cyrillic letters	
  	case '�': c = '\240'; break;
   	case '�': c = '\241'; break;
   	case '�': c = '\242'; break;
   	case '�': c = '\243'; break;
   	case '�': c = '\244'; break;
   	case '�': c = '\245'; break;
   	case '�': c = '\246'; break;
   	case '�': c = '\247'; break;
   	case '�': c = '\250'; break;
   	case '�': c = '\251'; break;
   	case '�': c = '\252'; break;
   	case '�': c = '\253'; break;
   	case '�': c = '\254'; break;
   	case '�': c = '\255'; break;
   	case '�': c = '\256'; break;
   	case '�': c = '\257'; break;
   	case '�': c = '\340'; break;
   	case '�': c = '\341'; break;
   	case '�': c = '\342'; break;
   	case '�': c = '\343'; break;
   	case '�': c = '\344'; break;
   	case '�': c = '\345'; break;
   	case '�': c = '\346'; break;
   	case '�': c = '\347'; break;
  	case '�': c = '\350'; break;
   	case '�': c = '\351'; break;
   	case '�': c = '\352'; break;
  	case '�': c = '\353'; break;
   	case '�': c = '\354'; break;
	case '�': c = '\355'; break;
   	case '�': c = '\356'; break;
   	case '�': c = '\357'; break;
// special (rare used) Russian letters
	case '�': c = '\360'; break;
	case '�': c = '\361'; break;
	} // switch
	return c;
}// char reencode(char c)

string reencode(const char *s){
  string str1 = s;
  reencode(str1);
  return str1;
}// reencode()

char* reencode(char *s){
  for (unsigned int i = 0;i<strlen(s);i++){
  	s[i] = reencode(s[i]);
  }
  return s;
}// reencode()

// ������ cout << v; �� ������ �� ������� ��� ����� void
// ����� ��, �� �������� � ����������
void reencode(vector<char> &v){
  for (unsigned int i=0; i<v.size(); i++){
  	v[i] = reencode(v[i]);
  }
}

string& reencode(string &str){
  for (unsigned int i=0; i<str.size(); i++){
  	str[i]=reencode(str[i]);
  }
  return str;
}	
