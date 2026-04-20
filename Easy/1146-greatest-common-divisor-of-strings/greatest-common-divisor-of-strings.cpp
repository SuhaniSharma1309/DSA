class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // int a=str.length(str1);
        // int b=str.length(str2);
        int a=str1.length();
        int b=str2.length();
        int rem;
        if(str1+str2 == str2+str1){
            while(b!=0){
                rem=a%b;
                a=b;
                b=rem;
            }
            return str1.substr(0,a);
        }
        return "";
    }
};