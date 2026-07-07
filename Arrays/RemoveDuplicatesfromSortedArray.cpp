class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1,k=1;
        while(k<n){
            if(nums[k]==nums[k-1]){
                k++;
                continue;
            }
            else 
             {
                nums[i+1]=nums[k];
                i++;
                j++;
                k++;
            }
            
            
        }
        return j;


        
    }
};
