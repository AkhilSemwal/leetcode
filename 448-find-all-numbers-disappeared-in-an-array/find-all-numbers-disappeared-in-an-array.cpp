class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;

        int j = 0;

        for (int i = 1; i <= nums.size(); i++) {
            while (j < nums.size() && nums[j] < i) {
                j++;
            }

            if (j == nums.size() || nums[j] != i) {
                res.push_back(i);
            }
        }

        return res;
    }
};