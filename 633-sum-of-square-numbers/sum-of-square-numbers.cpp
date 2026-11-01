class Solution {
public:
    bool judgeSquareSum(int c) {
        int check=sqrt(c);
        long long i = 0;
        long long j = check;
        long long z;
        while(i<=j)
        {
            z = (i*i)+(j*j);
            if(z==c)
                return true;
            else if(z>c)
                j--;
            else
                i++;
        }
        return false;
    }
};