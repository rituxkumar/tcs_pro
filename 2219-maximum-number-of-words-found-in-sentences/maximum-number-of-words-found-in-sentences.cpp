class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for (string s : sentences) {
            int word = 0;
            for (char ch : s) {
                if (ch == ' ')
                    word++;
            }
            word++;
            maxi = max(maxi, word);
        }
        return maxi;
    }
};