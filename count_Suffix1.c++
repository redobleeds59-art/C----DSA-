//leetcode solution for problem count valid suffix sort 1

#include<iostream>
#include<vector>
using namespace std;

    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        
        int diff = 0;
        while (diff < n && nums[diff] == target[diff]) {
            diff++;
        }

        // unsigned avoids UB (Undefined Behavior) on overflow
        unsigned long long h1 = 0;
        unsigned long long h2 = 0;

        // Strong 64-bit integer hash to completely avoid sum collisions
        auto h = [](unsigned long long x) -> unsigned long long {
            x ^= x >> 30;
            x *= 0xbf58476d1ce4e5b9ULL;
            x ^= x >> 27;
            x *= 0x94d049bb133111ebULL;
            x ^= x >> 31;
            return x;
        };

        bool sorted = true;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            h1 += h(nums[i]);
            h2 += h(target[i]);

            // Non-increasing means target[i] >= target[i+1]
            if (i < n - 1 && target[i + 1] > target[i]) {
                sorted = false;
            }

            if (!sorted) return ans;

            if (i <= diff && h1 == h2) {
                ans++;
            }
        }

        return ans;
    }

    int main() {
        vector<int> nums = {1, 2, 3, 4, 5};
        vector<int> target = {1, 2, 3, 4, 5};
        
        int result = countSuffix(nums, target);
        cout << "Count of matching suffixes: " << result << endl;
        
        return 0;
    }