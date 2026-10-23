#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubble_sort(vector<int> &arr,int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
}

void selection_sort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        int small_index=i;
        for(int j=i+1;j<n;j++){
          if(arr[j]<arr[small_index]){
            small_index=j;
          }
        }

        arr[i]=arr[small_index];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertion_sort(vector<int> &arr,int n){
    for (int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while (arr[prev]>=0&& arr[prev+1]>curr){
            arr[prev-1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    vector<int>arr={2,2,2,1,1,0,0,2,0,1};
    int n= arr.size();
    bubble_sort(arr,n);
    cout<<"\n";
    selection_sort(arr,n);
    cout<<"\n";
    insertion_sort(arr,n);
}