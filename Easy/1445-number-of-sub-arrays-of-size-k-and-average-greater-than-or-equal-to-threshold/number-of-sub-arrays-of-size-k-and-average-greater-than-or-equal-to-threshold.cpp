class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        if(n<k){
            return 0;
        }
        int window_sum=0;
        int count=0;
        for(int i=0; i<k; i++){
            window_sum+=arr[i];

        }
        int max_avg=window_sum/k;

        if(max_avg>=threshold){
            count++;
        }
        for(int i=k; i<n; i++){
            window_sum+=arr[i]-arr[i-k];
            max_avg=window_sum/k;

            if(max_avg>=threshold){
                count++;
            }
            // maxavg=max(maxavg, curr_av)
        }
        return count;
    }
};