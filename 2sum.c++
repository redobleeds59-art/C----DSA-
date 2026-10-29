#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int>two_sum(vector<int> &arr , int target){
    vector<int>ans;
    unordered_set<int>nums;
    int n=arr.size();

    for(int i=0;i<n;i++){
        int removal_part=target-arr[i];
        if(nums.find(removal_part)!=nums.end()){
             ans.push_back(arr[i]);
             ans.push_back(removal_part);
             return ans;
        }
      nums.insert(arr[i]);
    }
   return ans;
} 

int main() {
    // Test Case 1: Normal positive numbers
    vector<int> arr1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> res1 = two_sum(arr1, target1);
    cout << "Test Case 1 (Target " << target1 << "): ";
    if (!res1.empty()) cout << "[" << res1[0] << ", " << res1[1] << "]\n";
    else cout << "No pair found!\n";
    cout << "-----------------------------------\n";

    // Test Case 2: Negative numbers handle karna
    vector<int> arr2 = {-3, 4, 3, 90};
    int target2 = 0;
    vector<int> res2 = two_sum(arr2, target2);
    cout << "Test Case 2 (Target " << target2 << "): ";
    if (!res2.empty()) cout << "[" << res2[0] << ", " << res2[1] << "]\n";
    else cout << "No pair found!\n";
    cout << "-----------------------------------\n";

    // Test Case 3: Jab koi answer exist hi nahi karta
    vector<int> arr3 = {1, 2, 3, 4};
    int target3 = 10;
    vector<int> res3 = two_sum(arr3, target3);
    cout << "Test Case 3 (Target " << target3 << "): ";
    if (!res3.empty()) cout << "[" << res3[0] << ", " << res3[1] << "]\n";
    else cout << "No pair found!\n";
    cout << "-----------------------------------\n";

    return 0;
}