class Solution {
public:
    string simplifyPath(string path) {
        string stack[3000];
        int top = -1;
        string temp = "";
        int len = path.size();

        for (int i = 0; i <= len; i++) {
            if (i == len || path[i] == '/') {
                if (temp == "" || temp == ".") {
                    
                }
                else if (temp == "..") {
                    if (top != -1) {
                        top--;
                    }
                }
                else {
                    top++;
                    stack[top] = temp;
                }
                temp = "";
            }
            else {
                temp = temp + path[i];
            }
        }

        if (top == -1) {
            return "/";
        }

        string ans = "";
        for (int i = 0; i <= top; i++) {
            ans = ans + "/" + stack[i];
        }

        return ans;
    }
};