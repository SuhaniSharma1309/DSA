class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double> arrival_time;
        int n=dist.size();

        for(int i=0; i<n; i++){
            arrival_time.push_back(1.0*dist[i]/speed[i]);
        }
        sort(arrival_time.begin(), arrival_time.end());

        for(int i=0; i<n; i++){
            if(arrival_time[i]<=i){
                return i;
            }

        }
        return n;

    }
};