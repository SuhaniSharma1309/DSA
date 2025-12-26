#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,4,6,8};
    int n=arr.size();

    vector<int> prefix(n);
    prefix[0]=arr[0];

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

    for(int i=0; i<n; i++){
        cout<< prefix[i]<<" ";
    }
    cout<<endl;

    int l=1, r=3;
    int range_sum= prefix[r]-prefix[l-1];
    cout<< "Range sum: "<< range_sum <<endl;
    return 0;
}