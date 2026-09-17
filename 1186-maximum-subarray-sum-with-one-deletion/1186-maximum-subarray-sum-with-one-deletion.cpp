class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int noDelete = nums[0];
        int oneDelete = nums[0];

        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            int newNoDelete = max(nums[i], noDelete + nums[i]);

            int newOneDelete = max(oneDelete + nums[i], noDelete);

            noDelete = newNoDelete;
            oneDelete = newOneDelete;

            ans = max(ans, max(noDelete, oneDelete));
        }

        return ans;
    }
};