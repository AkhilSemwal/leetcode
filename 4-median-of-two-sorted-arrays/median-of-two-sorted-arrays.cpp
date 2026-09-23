class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;

        int len1 = nums1.size();
        int len2 = nums2.size();

        for(int i = 0; i < len1; i++)
        {
            ans1.push_back(nums1[i]);
        }

        for(int i = 0; i < len2; i++)
        {
            ans1.push_back(nums2[i]);
        }

        sort(ans1.begin(), ans1.end());

        int n = ans1.size();
        if(n%2==0){
            float k = ((ans1[(n/2)-1]+ans1[(n/2)])/2.0);
            return k;
        }

        else{
            return ans1[n/2];
        }

        
    }
};