class Solution {
public:
    vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
    
        int count[101] = {0};

        for (int num : nums) {
            count[num]++;
        }
        int running_sum = 0;
        for (int v = 0; v <= 100; v++) {
            int temp = count[v];
            count[v] = running_sum;
            running_sum += temp;
        }

        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            result[i] = count[nums[i]];
        }

        return result;
    }
};