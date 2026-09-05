class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int low=0;
        int maxLen=0;
        for(int high=0;high<s.size();high++){
            f[s[high]]++;
            int len=high-low+1;

            while(f.size()<len){
                f[s[low]]--;
                if(f[s[low]]==0) f.erase(s[low]);
                low++;
                len=high-low+1;
            }
            len=high-low+1;
            maxLen=max(maxLen,len);
        }
        return maxLen;
        
    }
};