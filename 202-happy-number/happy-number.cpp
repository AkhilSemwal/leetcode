class Solution {
public:
    bool isHappy(int n) {
        int sum;

        while(n != 1) {
            sum = 0;
            if(sum==1)
                return true;
            if(n==2||n==3||n==4|n==5||n==6||n==8||n==9)
                return false;
            while(n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }

            n = sum;
        }

        return true;
    }
};