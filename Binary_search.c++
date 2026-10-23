#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> &arr,int find){
    int n=arr.size()-1;
    int start=0;
    int end=n;
    int mid;

   while(start<=end){
        mid = start+(end-start)/2; //better for worst case scenario

        if (arr[mid]==find){
            return mid;
        }
        else if (arr[mid]>find){
            end=mid-1;
        }
        else {
            start=mid+1;
        }

     }
      return -1;
}

int main(){

    vector<int>nums={1,2,3,4,5,6,7};//array should be sorted....

    int target;
    cout<<"Enter the value: ";
    cin>>target;

    cout<<binary_search(nums,target);
}