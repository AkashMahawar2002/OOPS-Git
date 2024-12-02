#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st2;

    // opening files usng constructor and reading it
    ifstream input("logfile.txt"); // reading opertaion
    input>>st2;
    cout<<st2;
    input.close();
    return 0;
}