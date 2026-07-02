class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        vector<int> ans(n,0);
        for(int i=0; i<n;i++){
            if(abs(nums[left])<abs(nums[right])){
                ans[n-1-i]=pow(nums[right],2);
                right--;
            }
            else{
                ans[n-1-i]=pow(nums[left],2);
                left++;
            }
        }
        return ans;
    }
};