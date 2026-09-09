class Solution {
public:
    int singleNumber(vector<int>& nums) {

    //XORing identical numbers yields zero
    //canceling all even pairs and leaving only the unique odd element
    int res = 0;
        for (int x : nums) {
            res ^= x;
        }
        return res;
    }
};