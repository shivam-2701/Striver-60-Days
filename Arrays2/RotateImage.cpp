#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    void transpose(vector<vector<int>>& mat){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};