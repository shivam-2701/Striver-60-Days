#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> pascal;
 
      vector<long long int> temp ={1};
      pascal.push_back(temp);
        if(n==1)
        return pascal;
        temp={1,1};
        pascal.push_back(temp);
        if(n==2)
        return pascal;
    
        for(int i=2;i<n;i++){
            vector<long long int> temp;
            for(int j =0;j<=i;j++){
                if(j==0 || j==i){
                    temp.push_back(1);
                    continue;
                }
                long long int curr = pascal[i-1][j]+ pascal[i-1][j-1];
                temp.push_back(curr);
            }
            pascal.push_back(temp);
        }
    return pascal;
    
}
