#include <iostream>
#include <vector>

using namespace std;

bool compare(string &x, string &y) {
    return x + y > y + x;
}

string largestNumber(vector<int>& nums) {
    vector<string> str_nums;
    for (int num : nums) {
        str_nums.push_back(to_string(num));
    }

    sort(str_nums.begin(), str_nums.end(), compare);

    if (str_nums[0] == "0") {
        return "0";
    }

    string result = "";
    for (string &num : str_nums) {
        result += num;
    }

    return result;
}

int main() {
    vector<int> nums1 = {10, 2};
    vector<int> nums2 = {3, 30, 34, 5, 9};
    vector<int> nums3 = {3, 5, 9, 65, 44};

    cout << "Largest number for input {10, 2}: " << largestNumber(nums1) << endl;
    cout << "Largest number for input {3, 30, 34, 5, 9}: " << largestNumber(nums2) << endl;
    cout << "Largest number for input {3, 5, 9, 65, 44}: " << largestNumber(nums3) << endl;

    return 0;
}
