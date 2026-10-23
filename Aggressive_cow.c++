#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_allow(vector<int> &arr,int n , int cows,int min_position){
    int m=1; int point=arr[0];
    for (int i=0;i<n;i++){

        if(arr[i]-point>=min_position){
            m++;
            point=arr[i];
        }

        if(cows==m){
          return true ;
        }
    }

    return false;
}

int position (vector<int> &arr,int n , int cows){
 
    if(cows>n){
        return -1;
    }
    int ans =-1;
    int start =1; 
    int end=*max_element(arr.begin(), arr.end()) 
        - *min_element(arr.begin(), arr.end());
        while(start<=end){
            int mid=start+(end-start)/2;

            if(is_allow(arr,n,cows,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
}

int main() {
    vector<int> arr = {1,2,8,4,9};

    sort(arr.begin(), arr.end());

    cout << position(arr, arr.size(), 3);
}