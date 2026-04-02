class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;

        for (int x : arr) {
            mp[x]++;
            if (mp[x] > n / 4) {
                return x;
            }
        }
        return -1;
    }
};