#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        long long int res = 0, start = 0, end = 0, sum = 0, n = nums.size();

        for (end = 0; end < n; end++) {
            sum += nums[end];

            while (start + 1 <= end && (nums[end] * (end - start + 1)) > sum + k) {
                sum -= nums[start];
                start++;
            }
            res = std::max(res, end - start + 1);
        }
        return res;
    }
};

int main() {
    Solution solution;
    
    // Example usage:
    std::vector<int> nums = {1, 2, 4};
    int k = 5;

    int result = solution.maxFrequency(nums, k);

    std::cout << "Maximum Frequency: " << result << std::endl;

    return 0;
}
