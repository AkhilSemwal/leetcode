class Solution {
public:
    string makeFancyString(string s) {
        int len = s.size();
        string res;

        for(int i = 0; i < len; i++) {
            if(i + 1 >= len || s[i] != s[i+1]) {
                res.push_back(s[i]);
            }
            else if(i + 2 < len && s[i] == s[i+1] && s[i] == s[i+2]) {
                res.push_back(s[i]);
                res.push_back(s[i+1]);

                while(i + 1 < len && s[i] == s[i+1]) {
                    i++;
                }
            }
            else {
                res.push_back(s[i]);
                res.push_back(s[i+1]);
                i++;
            }
        }

        return res;
    }
};