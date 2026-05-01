class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        int target = 0;
        for(int f : freq) {
            if(f > 0) {
                if(target == 0) target = f;
                else if(f != target) return false;
            }
        }
        return true;
    }
};