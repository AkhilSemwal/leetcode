#include <vector>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        // Frequency array for values 0 to 100 based on problem constraints
        int count[101] = {0};

        for (int num : nums) {
            count[num]++;
        }

        // Transform into prefix sums where count[v] becomes the count
        // of elements strictly smaller than v
        int running_sum = 0;
        for (int v = 0; v <= 100; v++) {
            int temp = count[v];
            count[v] = running_sum;
            running_sum += temp;
        }

        std::vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = count[nums[i]];
        }

        return result;
    }
};