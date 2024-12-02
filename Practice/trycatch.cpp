#include<iostream>
using namespace std;



class Test{
    public: 
      Test(){
        cout<<"constructor of test"<<endl;
      }
       ~Test(){
        cout<<"distructor of test"<<endl;
      }
};
int main(){
    try{
        Test t1; // ---> 
        
        throw 10;

    }
    catch(int i){
        cout<<"cought \n"<<i<<endl;
    }
}

// int main(){

//     try{
//         try{
//             throw 20;
//     }
//     catch(int n){
//         cout<<"hanle partially \n";
//         throw;
//     }
// }
    
//     catch(int n){
//         cout<<"HAndle remaining ";
//         return 0;
//     }
// }

// int main(){

//     try{
//             throw 'a';
//     }
//     catch(int x){
//         cout<<"caught \n";
//     }
//     return 0;
// }

// int main(){
//     int x=-1;
//     cout<<"Before try \n";

//     try{
//         cout<<"inside try \n";
//         if(x<0){
//             throw "x";
//             cout<<"after throw(never executed) \n";
//         }
//     }
//     catch(int x){
//         cout<<"exception \n";
//     }
//     catch(...){
//         cout<<"koi dikkat nhi hai program me \n";
//     }
// }