#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> &arr,int st,int end , int target){
   int mid=st +(end-st)/2;
   if(arr[mid]==target){
     return mid;
   }else if(arr[mid]<target){
      st=mid+1;
     return binary_search(arr,st,end,target);
   }
   else{
    end=mid-1;
   return binary_search(arr,st,end,target);
   }
}

int main () {
    vector<int>arr={1,2,3,4,5,6,7};
    vector<int>nums={1,2,3,5,4,6,7};

    cout<< binary_search(arr,0,arr.size()-1,5);
    cout<<" ";
    cout<<  binary_search(nums,0,nums.size()-1,7);

    return 0;
}