class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k){
            return 0;
        }
        int window_sum=0;
        for(int i=0; i<k; i++){
            window_sum+= nums[i];
        }
        double max_avg=(double)window_sum/k;

        for(int i=k;i<n;i++){
            window_sum+= nums[i]-nums[i-k];
            double max_avgg=(double)window_sum/k;
            max_avg=max(max_avg, max_avgg);
        }
        return max_avg;
    }
};