class Solution {
public:
    int reverse(int x) {
        bool isNegative=(x < 0);
        long long num=abs((long long) x);
        long long rev=0;
        // int original=x;
        while(num>0){
            rev= num % 10 + rev*10;
            num = num/10;
        }
        if (isNegative) rev= -rev;

        if(rev > INT_MAX || rev < INT_MIN) return 0;
        return (int)rev;
        
    }
    
};