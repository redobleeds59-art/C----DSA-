#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool is_allow(vector<int> &arr,int n , int m,int max_time){
 int painter=1; int wall=0;

 for(int i=0; i<n;i++){

    if(arr[i]>max_time){
        return false;
    }

     if(arr[i]+wall<=max_time){
    wall+=arr[i];
 }
     else{
    painter++;
    wall=arr[i];
 }

    if(painter>m){
    return false;
 }
}

return true;
}

int partition(vector<int> &arr,int n , int m){
    int sum=0; int ans=-1;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=*max_element(arr.begin(), arr.end()); 
    int end=sum;

    if (m>n){
        return -1;
    }
    while(start<=end){
        int mid=start+(end-start)/2;

        if(is_allow(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return ans;
    
}
 
int main(){
    vector<int>arr={40,30,10,20};
    
    cout<<partition(arr,4,2);

}