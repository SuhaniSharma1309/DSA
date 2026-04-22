class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // int gain[0]=0;
        gain.insert(gain.begin(),0);
        // int altitude[0]=0;
        int n=gain.size();
        int altitude=0;
        int maxaltitude=0;
        for(int i=0; i<n; i++){
            altitude+=gain[i];
            maxaltitude=max(maxaltitude, altitude);
        }

        return maxaltitude;
    }
};