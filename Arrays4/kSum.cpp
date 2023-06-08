#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   vector<vector<int>> ksum(vector<int> & nums,long target,int st,int k){
       int n = nums.size();
       vector<vector<int>> ans;
        if(st==n  || nums[st]> target/k || nums[n-1]< target/k){
            return ans;
        }
        if(k==2){
            int l=st,r=n-1;
            while(l<r){
                long curr= nums[l]+nums[r];
                if(curr<target || (l>st and nums[l]==nums[l-1])){
                    l++;
                }else if(curr>target || (r<n-1 and nums[r]==nums[r+1])){
                    r--;
                }else{
                    vector<int> temp;
                    
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    ans.push_back(temp);
                    l++;
                    r--;
                }
            }
            return ans;
        }
        
        for(int i=st;i<nums.size();i++){
            if(i==st || nums[i]!=nums[i-1]){
                for( vector<int> subset : ksum(nums,target-nums[i],i+1,k-1)){
                    subset.push_back(nums[i]);
                    ans.push_back(subset);
                }
            }
           
        }
        return ans;
        
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
       
        return ksum(nums,target,0,4);
    }
};