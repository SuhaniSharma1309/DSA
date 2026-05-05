#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int arr[4] = {1,2,4,6};
    void check(){
        bool res= binary_search(arr, arr+4, 9);

        if(res){
            cout<<"found";
        
        }
        else{
            cout<<"not found";
        }
    }
    
};
int main(){
    Solution sol1;
    sol1.check();
    return 0;
}