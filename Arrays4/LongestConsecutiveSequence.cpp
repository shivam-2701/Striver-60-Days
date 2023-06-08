using namespace std;
class Solution {
public:
  #include<bits/stdc++.h>
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int maxm=0;
        for(int i=0;i<n;i++){
            if(s.find(nums[i]-1)!=s.end()){
                continue;
            }
            int curr=nums[i],count=0;
            while(s.find(curr)!=s.end()){
                curr++;
                count++;
            }
            maxm=max(count,maxm);
        }
        return maxm;
    }
};