class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        string resultstr="";
        while(i<word1.length() || j<word2.length()){
            if(i<word1.length()){
                resultstr.push_back(word1[i++]);
            }
            if(j<word2.length()){
                resultstr.push_back(word2[j++]);
            }
        }
        return resultstr;
    }
};