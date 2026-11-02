class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        vector<int> best(len,0);

        if(len==1)
            return nums[0];

        best[0] = nums[0];
        best[1] = max(nums[0],nums[1]);

         for(int i = 2; i < len; i++)
        {
            int rob = nums[i] + best[i-2];
            int skip = best[i-1];

            best[i] = max(rob, skip);
        }
         return best[len-1];
       
        
    }
};