class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;

        for(int i=0; i<n; i++){
            int subarray_sum=0;
            for(int j=i; j<n; j++){
                subarray_sum+=nums[j];
                if(subarray_sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};