#include<iostream>
#include<vector>
using namespace std;

int single_number(vector<int>&nums);

int main () {

   // vector<int>nums={1,2,3,4,3,2,1};
   vector<int>nums;
   cout<<"Enter the element in array : ";
   

    cout<<"unik element is : "<<single_number(nums);
}

int single_number(vector<int>&nums) {

    int ans=0;

    for(int i: nums){
        ans^=i;
    }

    return ans;
}