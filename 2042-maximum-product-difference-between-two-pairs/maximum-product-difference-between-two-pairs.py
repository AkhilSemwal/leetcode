class Solution(object):
    def maxProductDifference(self, nums):
        
        num=sorted(nums)
        c=num[0]
        d=num[1]
        x=len(num)
        a=num[x-1]
        b=num[x-2]
        return (a*b)-(c*d)