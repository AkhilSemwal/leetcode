
int longestValidParentheses(char* s) {
    int len = strlen(s);
    if (len == 0) return 0;

   
    int stack[len + 1];
    int top = -1;
    int max_len = 0;

   
    stack[++top] = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            
            stack[++top] = i;
        } else {
          
            top--;

            if (top == -1) {
               
                stack[++top] = i;
            } else {
                
                int current_len = i - stack[top];
                if (current_len > max_len) {
                    max_len = current_len;
                }
            }
        }
    }

    return max_len;
}