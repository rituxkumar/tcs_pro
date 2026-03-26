class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        vector<int> result;
        for (int num : nums) {
            if (mp[num] == 1 && mp[num - 1] == 0 && mp[num + 1] == 0) {
                result.push_back(num);
            }
        }
        return result;
    }
};