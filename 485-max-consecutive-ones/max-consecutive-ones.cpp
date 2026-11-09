class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = nums.size();
        int res= 0;
        int count = 0;
        for(int i = 0 ;i<len;i++)
        {
            if(nums[i]==1)
                count++;
                if(count>res)
                    res = count;
            if(nums[i]==0)
                count = 0;
        }
        return res;
    }
};