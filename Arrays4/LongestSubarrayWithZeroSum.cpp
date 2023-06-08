#include <bits/stdc++.h> 
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
     int n= arr.size();
     unordered_map<long,int> mp;
     long currSum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum==0){
            maxLen=max(maxLen,i+1);
         }
        if(mp.find(currSum)!=mp.end()){
            int currLen=i-mp[currSum];
            maxLen=max(currLen,maxLen);
            
        }else{
            mp[currSum]=i;
        }
    }
    return maxLen;

}