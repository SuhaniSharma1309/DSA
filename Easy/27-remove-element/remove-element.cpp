class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0; //other elements stored
        for(int j=0; j<n; j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
                // nums[i]=nums[j];
            }
        }
        return i;
    }
};