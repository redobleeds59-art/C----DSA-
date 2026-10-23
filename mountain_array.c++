#include<iostream>
#include <vector>
using namespace std;

int mountain_peak(vector<int> &arr){
     int start=1;
     int end=arr.size()-2;
     while(start<=end){
        int mid=start+(end-start)/2;

        if (arr[mid-1]<arr[mid]&&arr[mid+1]<arr[mid]){
            return mid;
        }

        if(arr[mid+1]>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid -1;
        }
     }
}

int main () {

    vector<int> a ={0,3,8,9,20,2};
    cout<<mountain_peak(a);
}