class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n = s.size();
        int a = 0;
        int b = 0;
      
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                a++;
            } else {
                b++;
            }
        }
        return abs(a-b);
    }
};