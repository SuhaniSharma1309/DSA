#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size() - 2; i++){
            if(nums[i] < nums[i+1] + nums[i+2]){
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};
int main() {
    Solution sol;

    vector<int> nums = {3, 6, 2, 3};

    int result = sol.largestPerimeter(nums);
    cout << "Largest Perimeter: " << result << endl;

    return 0;
}