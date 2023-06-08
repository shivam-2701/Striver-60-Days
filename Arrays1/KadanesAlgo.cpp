#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    ll maxmSum=INT_MIN;
    ll currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxmSum=max(currSum,maxmSum);
        if(currSum<0){
            currSum=0;
        }
    }
    if(maxmSum<0){
        return 0;
    }else{
        return maxmSum;
    }
}