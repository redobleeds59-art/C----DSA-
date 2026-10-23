#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Helper function to find the maximum digit of a number
int getMaxDigit(int n) {
    int max_d = 0;
    while (n > 0) {
        int last_digit = n % 10;          // Extract the last digit
        max_d = max(max_d, last_digit);   // Update max digit found so far
        n = n / 10;                       // Remove the last digit
    }
    return max_d;
}

int maxSum(vector<int>& nums) {
    // Array to store the largest number seen for each max_digit (0 to 9)
    vector<int> max_seen(10, -1); 
    int max_pair_sum = -1;

    for (int i = 0; i < nums.size(); i++) {
        int current_num = nums[i];
        int d = getMaxDigit(current_num);

        // If we have seen a number with this max digit before, form a pair
        if (max_seen[d] != -1) {
            int current_sum = current_num + max_seen[d];
            max_pair_sum = max(max_pair_sum, current_sum);
        }

        // Update the max_seen array with the largest number for this digit
        max_seen[d] = max(max_seen[d], current_num);
    }

    return max_pair_sum;
}

int main() {
    vector<int> nums = {51, 71, 17, 24, 42};
    
    int result = maxSum(nums);
    cout << "Maximum pair sum is: " << result << endl;
    
    return 0;
}