class Solution {
public:
    char repeatedCharacter(string s) {
        // first count the frequency of all element.
        unordered_map<char,int> mp;
        for (auto& it : s) {
            mp[it]++;
            if (mp[it] == 2) {
                return it;
            }
        }
        return ' ';
    }
};