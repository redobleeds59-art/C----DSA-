#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;   //time complexity is 0(N cube); 4sum;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n;j++){
                 if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1; int l=n-1;
                while(k<l){
                    long long sum=(long long )nums[i] + nums[j] +nums[k] + nums[l];

                    if(sum==target){
                        vector<int> trip={nums[i] , nums[j] , nums[k] , nums[l]};
                        ans.push_back(trip);
                        k++; l--;

                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }

        return ans ;
    }

    int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int target=0;
    vector<vector<int>> res1 = fourSum(nums , target);
     for(auto i :res1){
       cout<<"["<<i[0]<<" "<<i[1]<<" "<<i[2]<<" "<<i[3]<<"]";
     }
}