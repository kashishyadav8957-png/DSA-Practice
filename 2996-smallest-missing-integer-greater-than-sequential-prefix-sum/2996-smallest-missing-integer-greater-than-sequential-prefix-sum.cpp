class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixSum = nums[0];   
        int i = 1;

        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            prefixSum += nums[i];
            i++;
        }

        
        unordered_set<int> st(nums.begin(), nums.end());
        int candidate = prefixSum;

        while (st.count(candidate)) {
            candidate++;
        }
        return candidate;

        
    }
};