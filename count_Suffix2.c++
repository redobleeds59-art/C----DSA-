#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int countSuffix(vector<int>& nums, vector<int>& target) {
        int count = 0;
        int mismatch_idx = -1;
        int n = nums.size(); 
    
        for(int i = 0; i < n; i++){
           if(nums[i] != target[i]){
            mismatch_idx = i;
            break;
           }
        }
        
        if(mismatch_idx == -1) {
            mismatch_idx = n;
        }
        
        
        vector<int> velqorimna = nums;
        sort(velqorimna.begin() + mismatch_idx, velqorimna.end(), greater<int>());
        
        if(velqorimna == target){
            int start = (mismatch_idx == n) ? n - 1 : mismatch_idx;
            
            for(int i = start; i >= 0; i--){
               if(i == start){
                count++;
               }
               else if(target[i] >= target[i+1]){ 
                 count++;
               }
               else{
                break;
               }
            }
        }
        
        return count;
    }

    int main() {
        vector<int> nums = {1, 2, 3, 4, 5};
        vector<int> target = {1, 2, 3, 4, 5};
        
        int result = countSuffix(nums, target);
        cout << "Count of matching suffixes: " << result << endl;
        
        return 0;
    }