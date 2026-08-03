class Solution {
public:
    int findLHS(vector<int>& nums) {
                unordered_map<int,int> freq;
        int longest = 0;

        for(int num : nums) {
            freq[num]++;
        }

        for(auto &p : freq) {
            int x = p.first;
            if(freq.count(x+1)) {
                longest = max(longest, p.second + freq[x+1]);
            }
        }

        return longest;
        
    }
};