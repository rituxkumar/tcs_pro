class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0;
        int maxNegative = INT_MIN;

        unordered_set<int> st;

        for (auto &num : nums) {
            if (num <= 0) {
                maxNegative = max(maxNegative, num);
            } else if (!st.count(num)) {
                sum += num;
                st.insert(num);
            }
        }
        return sum == 0 ? maxNegative : sum;
    }
};