class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
                vector<int> result;
        if (nums.empty()) return result;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        unordered_set<int> s(nums.begin(), nums.end());

        for (int i = mn; i <= mx; i++) {
            if (s.find(i) == s.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};