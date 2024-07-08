#include<iostream>
using namespace std;

class B{

int a=13;
public :
    int show_a(){
        return a;
    }
    void putval(){cout<<a;
      }
};
/*class D:private B{
int c = 12;
public :
    void show_c(){
    cout<<"c : "<<c<<endl;
    }
};*/
main(){
B b;
b.putval();
//D d;
//d.show_c();
//b.show_a();
/*b.a=11;                       //These 3 statements will not work as inheritance here is private along with the data members a & c
d.c = 10;
d.show_a();*/
}
