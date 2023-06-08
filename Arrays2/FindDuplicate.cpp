#include <bits/stdc++.h> 
using namespace std;
int findDuplicate(vector<int> &arr, int n){
    sort(arr.begin(),arr.end());
    int dup;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            dup=arr[i];
        }
    }
    return dup;
}