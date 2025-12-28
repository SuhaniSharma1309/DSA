#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={2,1,5,1,3,2};
    int k=3;

    int window_sum=0;
    for(int i=0; i<k; i++){
        window_sum+=arr[i];
    }
    int max_sum=window_sum;
    for(int i=k; i<arr.size();i++){
        window_sum+=arr[i]-arr[i-k];
        max_sum=max(max_sum, window_sum);
    }
    cout<< "Maximum sum of subarray of size "<< k << " is "<< max_sum <<endl;
    return 0;
}