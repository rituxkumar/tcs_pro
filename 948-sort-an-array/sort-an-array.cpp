class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }

        int minElement = *min_element(nums.begin(), nums.end());
        int maxElement = *max_element(nums.begin(), nums.end());

        int index = 0;

        for (int num = minElement; num <= maxElement; num++) {
            while (mp[num] > 0) {
                nums[index] = num;
                index++;
                mp[num]--;
            }
        }
        return nums;
    }
};