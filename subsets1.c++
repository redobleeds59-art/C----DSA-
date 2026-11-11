#include<iostream>
#include<vector>
using namespace std;

void getsubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &res,int start){
    res.push_back(ans);
    if(start>= nums.size()){
        return;
    }
    for(int i=start;i<nums.size();i++){
        ans.push_back(nums[i]);
        getsubsets(nums,ans,res,i+1);
        ans.pop_back();
    }
}

vector<vector<int>> subsets(vector<int> &nums){
    vector<vector<int>> res;
    vector<int> ans;
    getsubsets(nums,ans,res,0);
    return res;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = subsets(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}