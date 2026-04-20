class Solution {
public:
    int findGCD(vector<int>& nums) {

        int min_element=nums[0];
        int max_element=nums[0];

        for(int i=1; i<nums.size(); i++){
            if (min_element > nums[i]){
                min_element = nums[i];
            }
            if(max_element < nums[i]){
                max_element = nums[i];
            }
        }
        int a=min_element;
        int b=max_element;
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;

        

    }

};