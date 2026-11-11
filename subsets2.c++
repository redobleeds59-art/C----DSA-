#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getsubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &res,int start){
    res.push_back(ans);
    if(start>= nums.size()){
        return;
    }
    for(int i=start;i<nums.size();i++){
        if (i > start && nums[i] == nums[i - 1]) {
                continue; 
            }
        ans.push_back(nums[i]);
        getsubsets(nums,ans,res,i+1);
        ans.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int>ans;
        sort(nums.begin(), nums.end());
        getsubsets(nums,ans,arr,0);

        return arr;
    }

int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> res = subsetsWithDup(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}