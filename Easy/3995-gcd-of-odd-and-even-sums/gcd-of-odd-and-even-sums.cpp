class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;

        for(int i=1;i<=n;i++){
            sumEven+=2*i;
        }
        for(int i=1;i<=n;i++){
            sumOdd+=2*i-1;
        }

        int a=sumOdd;
        int b=sumEven;

        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};