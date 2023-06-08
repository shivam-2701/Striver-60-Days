#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m= matrix[0].size();
    vector<pair<int,int>> zeroes;
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                zeroes.push_back(make_pair(i,j));
            }
        }
    }
    while(zeroes.size()>0){
        pair<int,int> curr =zeroes.back();
        zeroes.pop_back();
        for(int i=0;i<n;i++){
            matrix[i][curr.second]=0;
        }
        for(int i=0;i<m;i++){
            matrix[curr.first][i]=0;
        }   
    }
}