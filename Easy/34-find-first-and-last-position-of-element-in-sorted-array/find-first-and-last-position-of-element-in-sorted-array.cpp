class Solution {
public:
    int findfirstelement(vector<int>& nums, int target){
       int n=nums.size();
        int left=0, right=n-1;
        // int mid=left+(right-left)/2;
        int ans=-1;

        while(left<=right){
        int mid=left+(right-left)/2;

            if(nums[mid]==target){
                ans=mid;
                right=mid-1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
    int findlastelement(vector<int>& nums, int target){
       int n=nums.size();
        int left=0, right=n-1;
        int mid=left+(right-left)/2;
        int ans=-1;

        while(left<=right){
        int mid=left+(right-left)/2;

            if(nums[mid]==target){
                ans=mid;
                // high=mid-1;
                left=mid+1; //go right
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first= findfirstelement(nums, target);
        int last = findlastelement(nums, target);

    
    return{first,last};
    }
};