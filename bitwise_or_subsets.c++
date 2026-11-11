#include<iostream>
#include<vector>
using namespace std;

  void getsubset(vector<int> &nums,int index,int current_or, int max_or,int& count){
        if(index==nums.size()){
            if(current_or==max_or){
                count++;
            }
            return ;
        }
        getsubset(nums,index+1,current_or|nums[index], max_or,count);

        getsubset(nums,index+1,current_or, max_or,count);
       
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int max_or=0;
        int count=0;
        for(int i: nums){
          max_or=max_or| i;
        }

        getsubset(nums, 0, 0, max_or, count);

        return count;
    }

int main(){
    vector<int> nums = {3, 1};
    cout << countMaxOrSubsets(nums) << endl;
    return 0;
}