class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int totalSum = 0;

        for(int i = 0; i < len; i++) {
            totalSum += nums[i];
        }

        int sum1 = 0;

        for(int i = 0; i < len; i++) {
            int sum2 = totalSum - sum1 - nums[i];

            if(sum1 == sum2) {
                return i;
            }

            sum1 += nums[i];
        }

        return -1;
    }
};