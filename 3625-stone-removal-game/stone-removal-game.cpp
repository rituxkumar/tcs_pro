class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }

        int counter = 10;
        int turn = 1;

        while (n >= counter) {
            if (turn == 1 && n < counter) {
                return false;
            } else if (n < counter) {
                return true;
            }
            n = n - counter;
            turn = !turn;

            counter--;
        }

        return turn==1?false:true;;
    }
};