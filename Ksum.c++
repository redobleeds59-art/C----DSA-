#include<iostream>
#include<vector>
using namespace std;

int ksum(vector<int> &arr , int target){
  int n = arr.size();
  int count=0;
  for(int i=0;i<n;i++){
    int sum =0;
    for(int j=i; j<n; j++){
        sum+=arr[j];
        if(sum==target){
            count++;
        }
    }
  }

  return count;
}

int main() {
    // Test Case 1: Standard subarray
    vector<int> arr1 = {1, 1, 1};
    int target1 = 2;
    cout << "Test Case 1: {1, 1, 1}, Target: " << target1 << endl;
    cout << "Subarrays found: " << ksum(arr1, target1) << " (Expected: 2)" << endl;
    cout << "-----------------------------------" << endl;

    // Test Case 2: Single element equals target
    vector<int> arr2 = {1, 2, 3};
    int target2 = 3;
    cout << "Test Case 2: {1, 2, 3}, Target: " << target2 << endl;
    cout << "Subarrays found: " << ksum(arr2, target2) << " (Expected: 2)" << endl; 
    // The two subarrays are [1, 2] and [3]
    cout << "-----------------------------------" << endl;

    // Test Case 3: Negative numbers
    vector<int> arr3 = {1, -1, 0};
    int target3 = 0;
    cout << "Test Case 3: {1, -1, 0}, Target: " << target3 << endl;
    cout << "Subarrays found: " << ksum(arr3, target3) << " (Expected: 3)" << endl;
    // The three subarrays are [1, -1], [0], and [1, -1, 0]

    return 0;
}