class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        int diff =2* (k - i);
                        result = min(result, diff);
                    }
                }
            }
        }
        return result == INT_MAX ? -1 : result;
    }
};