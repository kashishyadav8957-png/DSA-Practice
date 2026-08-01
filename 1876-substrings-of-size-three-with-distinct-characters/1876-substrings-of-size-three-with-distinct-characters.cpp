class Solution {
public:
    int countGoodSubstrings(string s) {
                int n = s.size();
        int count = 0;

        
        for (int i = 0; i + 2 < n; i++) {
            char a = s[i], b = s[i+1], c = s[i+2];
            
            if (a != b && b != c && a != c) {
                count++;
            }
        }
        return count;
    }
};