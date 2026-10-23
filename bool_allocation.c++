#include<iostream>
#include<vector>
using namespace std;

bool is_allow(vector<int> &arr,int max_allowance , int m,int n){

    int stu=1; int pages=0;

    for (int i=0;i<n;i++){
        if(arr[i]>max_allowance){
            return false;
        }

        if (pages +arr[i]<=max_allowance){
            pages+=arr[i];
        }
        else {
            stu++;
            pages=arr[i];
        }
       }

       if (stu>m){
        return false;
       }

       return true;
}

int book_allocation (vector<int> &arr,int m,int n){

    if (m>n){
        return -1;
    }
    int sum=0; int ans=-1;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start =0;
    int end=sum;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(is_allow(arr,mid,m,n)){
           ans=mid;
            end=mid-1;
        }
        else{ 
            start=mid+1;
        }
    }

    return ans;
}
int main () {

    vector<int>arr={10,20,30,40};
    cout<<book_allocation(arr,3,4);
}