class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result = "";
        int n = part.length();

        for (char& ch : s) {
            result.push_back(ch);

            if (result.length() >= part.length() &&
                result.substr(result.length() - part.length()) == part) {
                result.erase(result.length() - part.length());
            }
        }
        return result;
    }
};