class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 9) {
                sum += nums[i];
            }
        }
        // double digit sum.
        int double_digit_sum = 0;
         for (int j = 0; j < nums.size(); j++) {

            if (nums[j] > 9) {
                double_digit_sum += nums[j];
            }
        }

        if (sum == double_digit_sum) {
            return false;
        }
        return true;
    }
};