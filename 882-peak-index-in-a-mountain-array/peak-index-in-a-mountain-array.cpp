class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int  high = arr.size() - 1;
        while(low<=high)
        {
           int mid1=low+(high-low)/3;
           int mid2=high-(high-low)/3;
            if (arr[mid1]<arr[mid2])
                low=mid1+1;
            else
                high=mid2-1;
        
        }
        return low;
    }
        
    
};