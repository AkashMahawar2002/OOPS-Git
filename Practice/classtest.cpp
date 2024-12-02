#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);

    if((sa + sb )> (sb + sa)){
        return true;
    }
    return false;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);

        if (nums[0] == 0) {
            return "0";
        }

        string ans = "";
        for (int num : nums) {
            ans += to_string(num);
        }

        return ans;
    }
};


int main() {
    Solution s1;

    vector<int> nums1 = {3, 30, 34, 5, 9};
    cout << "Test Case 1: "<<solution.largestNumber(nums1) << endl;

    vector<int> nums2 = {10, 2};
    cout << "Test Case 2: "<<solution.largestNumber(nums2) << endl;

    return 0
}
    




// class Sorter{
//     protected:
//     int* cap;
//     int size;
//     public: 
//     sorter(){
//     }
//     sorter(int x, int n):cap(x), size(n){
//     }

//     virtual void sort() {
//         cout<<"base class sorting";
//         int m = sizeof(cap) / sizeof(cap[0]);
//         for (int i = 0; i < m - 1; i++)
//             for (int j = m - 1; i < j; j--)
//                 if (cap[j] < cap[j - 1])
//                     swap(cap[j], cap[j - 1]);
//     }//bubble sort

//     protected:
//     void displayData() const {
//         for (int i = 0; i < size; i++) {
//             cout << cap[i];
//         }
//         cout << endl;
//     }
// };

// class NumberCombinerSorter : public Sorter{
//     public:
//     void sort() override{
//         cout<<"Now sub class sorting ";
//          int m = sizeof(cap) / sizeof(cap[0]);
//         for (int i = 0; i < m - 1; i++)
//             for (int j = m - 1; i < j; j--)
//                 if (cap[j] < cap[j - 1])
//                     swap(cap[j], cap[j - 1]);
//     } // Bubble Sort

//     void displayMaxCombination() const {
//         displayData();
//     }

// };
// int main()
// {
//     int numbers[] = {5, 3, 7, 1, 6};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     NumberCombinerSorter sorter(numbers, size);
//     sorter.sort();
//     cout<<"sorted array";
//     sorter.displayMaxCombination();
//     return 0;
// }