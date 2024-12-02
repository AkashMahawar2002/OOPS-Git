#include <iostream>
using namespace std;

int main(){
    int arr[]={2,5,7,11};
    int t=9;
    int n;
    for(int i=0;i<n-1;i++){
        int second;
        int rem = t - arr[i];
        if(rem==arr[i]){
            return i;
            second=i;
        }
        cout<<i<<second<<endl;
    }
    return 0;
}



// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int arr[] = {2, 7, 11, 15};
//     int target = 9;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     unordered_map<int, int> indices;
    
//     for (int i = 0; i < n; i++) {
//         int complement = target - arr[i];
        
//         if (indices.find(complement) != indices.end()) {
//             cout << indices[complement] << " " << i << endl;
//             return 0;
//         }
        
//         indices[arr[i]] = i; 
//     }
    
//     cout << "No pair found." << endl;
//     return 0;
// }

// int main(){
//     // int a=3;
//     // float b=20.0;
//     // cout<<(b/a);
//     // cout<<c;
//     // return 0;

//     int a=3;
//     int b=2;
//     float c=(a/b);
//     cout<<c;

//     // int a=3;
//     // float b=20.0;
//     // int c=(b/a);
//     // cout<<c;
// }


// #include <iostream>
// #include <stdio.h>
// using namespace std;
// void fn(int a)
// {
//     switch (a)
//     {
//     case 0:
//         printf("%u",a);
//         break;
    
//     default:
//         printf("%u",a);
//         fn(a-1);
//     }
// }
// int main()
// {
//     fn(100);
// }

// #include <iostream>
// using namespace std;
// int main(){
//     if(!(cout<<"Hello")){ 
//         cout<<"Hellovnvhhfhjfh";
    
//     }
//     else{
//         cout<<" world";
//     }
//     return 0;
// }
// int main(){
//     int x = 101;
//     while(x){
        
//         --x;
//         cout<<x<<endl;
        
//     }
// }


// int printNumbers(int n) {
//     cout << n << " ";
    
//     while (!) {
//         printNumbers(n - 1); 
//     }
// }

// int main() {
//     printNumbers(100);
//     return 0;
// }