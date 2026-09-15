class Solution {
public:
    int evalRPN(vector<string>& tokens) {

      int stack[10000];
        int top = -1;
        int len = tokens.size();

        for (int i = 0; i < len; i++) {
            if (tokens[i] == "+") {
                int b = stack[top];
                top--;
                int a = stack[top];
                top--;
                top++;
                stack[top] = a + b;
            }
            else if (tokens[i] == "-") {
                int b = stack[top];
                top--;
                int a = stack[top];
                top--;
                top++;
                stack[top] = a - b;
            }
            else if (tokens[i] == "*") {
                int b = stack[top];
                top--;
                int a = stack[top];
                top--;
                top++;
                stack[top] = a * b;
            }
            else if (tokens[i] == "/") {
                int b = stack[top];
                top--;
                int a = stack[top];
                top--;
                top++;
                stack[top] = a / b;
            }
            else {
                top++;
                stack[top] = stoi(tokens[i]);
            }
        }

        return stack[top];
    }
};