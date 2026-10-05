int scoreOfParentheses(char* s) {
    int len = strlen(s);
    int stack[len + 1];
    int top = 0;
    stack[top] = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = 0;
        } else {
            int inner = stack[top--];

            if (inner == 0)
                stack[top] += 1;
            else
                stack[top] += 2 * inner;
        }
    }

    return stack[0];
}