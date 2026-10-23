#include<iostream>
#include<vector>
using namespace std;

int search (vector<int> arr){
    
    int start =0;
    int end= arr.size()-1;
    
    while(start<=end){

        int mid =start + (end-start)/2;
        if (arr[mid-1]!=arr[mid]&&arr[mid+1]!=arr[mid]){
            return mid;
        }

        if (mid%2==0){
            if (arr[mid]==arr[mid-1]){
                end=mid-2;
            }
            else{
                start=mid+2;
            }
        }
        else{
            if (arr[mid]==arr[mid-1]){
             start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }

    return -1;
}

int main () {

    vector<int> A ={1,1,2,3,3,4,4,8,8};
    cout << search(A);

}