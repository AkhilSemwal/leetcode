class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;
        int max = 0;
        int row = 0;
        
        vector<int> res;

        for(int i = 0; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
                
                if(count > max){
                    max = count;
                    row = i;
                }
            }

            count = 0;
        }

       res.push_back(row);
       res.push_back(max);
        
        return res;
    }
};