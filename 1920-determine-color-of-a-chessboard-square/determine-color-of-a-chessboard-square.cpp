class Solution {
public:
    bool squareIsWhite(string coordinates) {

        int col = coordinates[0] - 'a' + 1;
        int row = coordinates[1] - '0';

        if ((row + col) % 2 == 0)
            return false;
        else
            return true;
    }
};