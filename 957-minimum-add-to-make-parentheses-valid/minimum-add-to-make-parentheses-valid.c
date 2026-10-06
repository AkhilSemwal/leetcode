int minAddToMakeValid(char* s) {
    int count = 0;
    int add = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            count++;
        } else {
            if (count > 0) {
                count--;
            } else {
                add++;
            }
        }
    }

    return add + count;
}