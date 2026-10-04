bool checkValidString(char* s) {
    int len = strlen(s);

    int minOpen = 0;
    int maxOpen = 0;

    for (int i = 0; i < len; i++) {
        char current = s[i];

        if (current == '(') {
            minOpen++;
            maxOpen++;
        }

        else if (current == ')') {
            minOpen--;
            maxOpen--;
        }

        else if (current == '*') {
            minOpen--;   
            maxOpen++;   
        }

        if (maxOpen < 0) {
            return false;
        }

        if (minOpen < 0) {
            minOpen = 0;
        }
    }

    return minOpen == 0;
}