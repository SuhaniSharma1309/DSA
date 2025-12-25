#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr ={1,2,3,4,5};
    int left=0, right=arr.size()-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i]<<" ";
    }
    return 0;

}