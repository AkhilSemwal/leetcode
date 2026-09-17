class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> final_lst;
        vector<int> temp_lst = intervals[0];

        int i = 1;

        while (i < intervals.size()) {
            if (intervals[i][0] <= temp_lst[1]) {
                temp_lst[1] = max(temp_lst[1], intervals[i][1]);
            } 
            else {
                final_lst.push_back(temp_lst);
                temp_lst = intervals[i];
            }

            i++;
        }

        final_lst.push_back(temp_lst);

        return final_lst;
    }
};
        