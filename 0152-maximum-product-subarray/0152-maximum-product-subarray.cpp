class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int max_product=nums[0];
        int min_product=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=min_product*nums[i];
            int v3=max_product*nums[i];

            max_product=max(v1,max(v2,v3));
            min_product=min(v1,min(v2,v3));

            res=max(max(max_product,min_product),res);
            
        }
        return res;
        
    }
};