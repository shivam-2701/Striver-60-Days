#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool binary_search(vector<int> & arr,int l,int r,int x){
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]>x){
                r=mid-1;
            }else if(arr[mid]<x){
                l=mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int l=0,r=n-1;
        int sr=0;
        while(l<=r){
            int mid =(l+r)/2;
            if(matrix[mid][0]<=target){
                sr=mid;
                l=mid+1;
            }else if(matrix[mid][0]>target){
                r=mid-1;
            }
        }
        bool ans= binary_search(matrix[sr],0,matrix[sr].size()-1,target);
        return ans;
        
        
    }
};