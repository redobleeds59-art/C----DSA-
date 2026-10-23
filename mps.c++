#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        int max_p = INT_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // If we hit a 0, we reset that specific tracker to 1
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            // Prefix multiplies left-to-right
            prefix = prefix * nums[i];
            
            // Suffix multiplies right-to-left
            suffix = suffix * nums[n - 1 - i];

            // Update max_p with whichever is bigger: current max, current prefix, or current suffix
            max_p = max(max_p, max(prefix, suffix));
        }

        return max_p;
    }
};