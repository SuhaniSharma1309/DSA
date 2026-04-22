class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0; //pointer for non zero elements
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                // nums[j]=nums[i];
                swap(nums[i],nums[j]);
                j++;
            }
        }
        // return nums;
    }
};