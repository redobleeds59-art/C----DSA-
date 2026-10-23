#include<iostream>
#include <vector>
using namespace std;

void xyz (vector<int>nums){

    vector<int>ans(nums.size(),1);
    for (int i=1;i<nums.size();i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for (int i=nums.size()-2;i>=0;i--){
       suffix*=nums[i+1];
       ans[i]*=suffix;
    }

    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main () {
    vector<int>arr={1,2,3,4,5};

    xyz(arr);

}