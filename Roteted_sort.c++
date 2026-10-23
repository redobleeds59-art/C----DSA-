#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int> &arr,int find){
    int n=arr.size()-1;
    int start=0;
    int end=n;
    int mid;
    
   while(start<=end){
      mid=start +(end-start)/2;

     if(arr[start]<=arr[mid]){

        if (arr[start]<=find<=arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
     else {
            if(arr[mid]<=find<=arr[end]){

                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
      
      return -1;
}
}

int main() {

    vector<int>nums={1,2,3,4,5,6,7};//array should be sorted....

    int target;
    cout<<"Enter the value: ";
    cin>>target;

    cout<<binary_search(nums,target);
}