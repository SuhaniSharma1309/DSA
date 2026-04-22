class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0];
        int minproduct=nums[0];
        int result=nums[0];
        int n=nums.size();

        for(int i=1; i<n; i++){
            if(nums[i]<0){
                swap(maxproduct, minproduct);
            }
            maxproduct=max(nums[i], maxproduct*nums[i]);
            minproduct=min(nums[i], nums[i]*minproduct);
            result=max(maxproduct,result);
        }
        return result;
    }
};