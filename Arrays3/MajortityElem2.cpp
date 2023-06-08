//  Question link  https://leetcode.com/problems/majority-element-ii/


// Solved using extending Boyer Moore's Voting algorithm
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int count1=0,maxm1=-1,count2=0,maxm2=-1;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==maxm1){
                count1++;
            }else if(nums[i]==maxm2){
                count2++;
            }else if(count1==0){
                maxm1=nums[i];
                count1++;
            }else if(count2==0){
                maxm2=nums[i];
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxm1){
                count1++;
            }else if(nums[i]==maxm2){
                count2++;
            }
        }
        vector<int> ans;
        if(count1>floor(1.0*n/3)){
            ans.push_back(maxm1);
        }
        if(count2>floor(1.0*n/3)){
            ans.push_back(maxm2);
        }
        
        return ans;
        
       
    }
};