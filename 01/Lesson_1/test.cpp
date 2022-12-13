#include <iostream> 
#include "cmd_encoding.h"
using namespace std;


class queue {
    int q[100]; //private
    int sloc, rloc; //private
    public : void init(); //public, after this all is public

    void qput(int i); // public also
    int qget(); // public also
};

void queue :: init(){
    rloc=sloc=0;
}

void queue ::qput (int i){

    if(sloc==100){
        cout<<"queue is full.\n"; 
        return;
    }

    sloc++; 
    q[sloc]= i;
}

int queue::qget(){

    if(rloc==sloc){
        cout<<'queue is empty.\n';
        return 0;
    }
    rloc++;
    return q[rloc];
}


int main(){
	
    queue Q1;

    Q1.init();

    Q1.qput(4);
    Q1.qput(2);
    cout<<Q1.qget()<<" Hi";
    cout<<Q1.qget()<<" Hi";
    cout<<Q1.qget()<<" Hi";
    cout<<Q1.qget()<<" Yoy";


	return 0;
}

