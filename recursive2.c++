#include<iostream>
#include<vector>
using namespace std;

void print_subarrays(vector<int> &arr,vector<int> &subarr,int index){
    if(index==arr.size()){
        for(int i=0;i<subarr.size();i++){
            cout<<subarr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subarr.push_back(arr[index]);
    print_subarrays(arr,subarr,index+1);
    subarr.pop_back();
    print_subarrays(arr,subarr,index+1);
}

int main () {
    vector<int>arr={1,2,3};
    vector<int>subarr;
    print_subarrays(arr,subarr,0);
    return 0;
}