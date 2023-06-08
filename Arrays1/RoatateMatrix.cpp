#include <bits/stdc++.h> 
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int cycle= min(n,m)/2;

    if(n==1 || m==1){
        return ;
    }
    for(int i=0;i<cycle;i++){
        //LeftMost Line
        int curr=mat[i][i];
        for(int j=i;j<n-i-1;j++){
            mat[j][i]=mat[j+1][i];
        }
       int curr1=mat[i][i+1];
         mat[i][i+1]=curr;
        //upper line
        for(int j=i+2;j<m-i;j++){
            int temp=mat[i][j];
            mat[i][j]=curr1;
            curr1=temp;
        }
       curr=mat[i+1][m-i-1];
       mat[i+1][m-i-1]=curr1;
       //right side
       for(int j=i+2;j<n-i;j++){
           int temp=mat[j][m-i-1];
           mat[j][m-i-1]=curr;
           curr=temp;
       }

        curr1=mat[n-i-1][m-i-2];
        mat[n-i-1][m-i-2]=curr;
//         //bottom side
        for(int j=m-i-3;j>=i;j--){
            int temp =mat[n-i-1][j];
            mat[n-i-1][j]=curr1;
            curr1=temp;
        }
        
    }

}