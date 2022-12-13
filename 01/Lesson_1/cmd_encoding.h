// Преобразуване от кодировката на devC++ към
// кодировката на cmd (command line window)
#include <iostream> 
#include <string.h> 
#include <string> 
#include <vector> 
using namespace std;
// прототипи- prototypes
char reencode(char c);// the basic function
string reencode(const char *s);
string& reencode(string &str);
char* reencode(char *s);
void reencode(vector<char> &v);// ВИЖ коментара за void  надолу

char reencode(char c){
  	switch (c) { 
// Capital cyrillic letters
   	case 'А': c = '\200'; break;
   	case 'Б': c = '\201'; break;
   	case 'В': c = '\202'; break;
   	case 'Г': c = '\203'; break;
   	case 'Д': c = '\204'; break;
   	case 'Е': c = '\205'; break;
   	case 'Ж': c = '\206'; break;
   	case 'З': c = '\207'; break;
   	case 'И': c = '\210'; break;
   	case 'Й': c = '\211'; break;
   	case 'К': c = '\212'; break;
   	case 'Л': c = '\213'; break;
   	case 'М': c = '\214'; break;
   	case 'Н': c = '\215'; break;
   	case 'О': c = '\216'; break;
   	case 'П': c = '\217'; break;
   	case 'Р': c = '\220'; break;
   	case 'С': c = '\221'; break;
   	case 'Т': c = '\222'; break;
   	case 'У': c = '\223'; break;
   	case 'Ф': c = '\224'; break;
   	case 'Х': c = '\225'; break;
   	case 'Ц': c = '\226'; break;
   	case 'Ч': c = '\227'; break;
  	case 'Ш': c = '\230'; break;
   	case 'Щ': c = '\231'; break;
   	case 'Ъ': c = '\232'; break;
	case 'Ы': c = '\233'; break;
   	case 'Ь': c = '\234'; break;
	case 'Э': c = '\235'; break;
   	case 'Ю': c = '\236'; break;
   	case 'Я': c = '\237'; break;
// small Cyrillic letters	
  	case 'а': c = '\240'; break;
   	case 'б': c = '\241'; break;
   	case 'в': c = '\242'; break;
   	case 'г': c = '\243'; break;
   	case 'д': c = '\244'; break;
   	case 'е': c = '\245'; break;
   	case 'ж': c = '\246'; break;
   	case 'з': c = '\247'; break;
   	case 'и': c = '\250'; break;
   	case 'й': c = '\251'; break;
   	case 'к': c = '\252'; break;
   	case 'л': c = '\253'; break;
   	case 'м': c = '\254'; break;
   	case 'н': c = '\255'; break;
   	case 'о': c = '\256'; break;
   	case 'п': c = '\257'; break;
   	case 'р': c = '\340'; break;
   	case 'с': c = '\341'; break;
   	case 'т': c = '\342'; break;
   	case 'у': c = '\343'; break;
   	case 'ф': c = '\344'; break;
   	case 'х': c = '\345'; break;
   	case 'ц': c = '\346'; break;
   	case 'ч': c = '\347'; break;
  	case 'ш': c = '\350'; break;
   	case 'щ': c = '\351'; break;
   	case 'ъ': c = '\352'; break;
  	case 'ы': c = '\353'; break;
   	case 'ь': c = '\354'; break;
	case 'э': c = '\355'; break;
   	case 'ю': c = '\356'; break;
   	case 'я': c = '\357'; break;
// special (rare used) Russian letters
	case 'Ё': c = '\360'; break;
	case 'ё': c = '\361'; break;
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

// понеже cout << v; не работи за вектори тук връща void
// стига ми, че векторът е прекодиран
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
