class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0;
        int countZeroes=0,maxLen=0;
        for(right=0;right<nums.size();right++){
            if(nums[right]==0) countZeroes++;

            while(countZeroes>k){
                if(nums[left]==0) countZeroes--;
                left++;
            }
            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
        

    }
};