class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for(int g = 0; g < s.size(); g++){
            for(int i = 0, j = g; j < s.size(); i++, j++){
                if(g == 0){
                    dp[i][j] = true;
                }
                else if(g == 1){
                    if(s[i] == s[j]) dp[i][j] = true;
                    else dp[i][j] = false;
                }
                else {
                    if(s[i] == s[j] && dp[i+1][j-1] == true){
                        dp[i][j] = true;
                    }
                    else{
                        dp[i][j] = false;
                    }
                }
                if(dp[i][j]) count++;
            }
        }
        return count;
    }
};