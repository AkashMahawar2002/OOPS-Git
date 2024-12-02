#include<iostream>
using namespace std;

class Demo{
    int a,b;
    public:
    void getdata(){
        cout<<"\n Enter the real and img values: ";
        cin>>a>>b;
    }
    void putdata(){
        cout<<"\n overloaded real and img values =: "<<a<<b;
    }
    // void operator=(Demo bb){ // overloaded operator fuction defition
    // a=bb.a;
    // // return this*;
    // }
    void operator+=(Demo c){ // overloaded operator fuction defition
    a+=c.a;
    b+=c.b;
    // return this*;
    }
};



int main(){
    Demo c1, c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1;
    c3+=c2;
    c3.putdata();
}