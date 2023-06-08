#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getPaths(int m,int n,int x,int y,vector<vector<int>>& dp){
        if(x==m || y==n){
            return 0;
        }
        if(x==m-1 and y==n-1){
            return 1;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        
        int paths=0;
        paths+=getPaths(m,n,x+1,y,dp);
        paths+=getPaths(m,n,x,y+1,dp);
        dp[x][y]=paths;
        return paths;

        
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1));
        int ans=getPaths(m,n,0,0,dp);
        return ans;
    }
};