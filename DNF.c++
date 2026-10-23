#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void DNF (vector<int> &arr,int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int>arr={2,2,2,1,1,0,0,2,0,1};
    int n=arr.size();
    DNF(arr,n);
}