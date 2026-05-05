class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        if(x<0){
            return false;
        }
        int orig=x;
        while(x>0){
            rev = x % 10 + rev*10;
            x = x/10;
        }
        return orig==rev;

        // if(x==rev){
        //     return true;
        // }
        // // else{
        // //     return false;
        // // }
        // return false;
    }
};