#include <iostream>
using namespace std;

class A{
    public:
    int x;
    public:
    A(int x1){
        x=x1;
    }
    void display(){
        cout<<x;
    }
    A(A &obj){
        x=obj.x;
    }
};

int main(){
        A o1(20);
       A o2(60);
      //  A o2(o1); //copy
        o2=o1;  // assigning new value
        // // A o3;
        // // o3=o2;
        // A o3(o2);
        o1.x=4;
        o1.display();
        cout<<endl;
        o2.display();
        // cout<<endl;
        // o3.display();
        
}