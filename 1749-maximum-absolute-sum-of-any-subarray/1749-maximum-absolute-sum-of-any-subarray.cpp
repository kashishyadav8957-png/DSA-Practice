class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = 0;
        int minSum = 0;
        int ans = 0;

        for (int x : nums) {
            maxSum = max(x, maxSum + x);
            minSum = min(x, minSum + x);

            ans = max(ans, max(abs(maxSum), abs(minSum)));
        }

        return ans;
    }
};