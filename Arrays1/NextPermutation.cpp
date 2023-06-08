#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            idx=i;
            break;
        }
    }
    vector<int> nxtpermute=permutation;
    
    
    if(idx==-1){
        sort(nxtpermute.begin(),nxtpermute.end());
        return nxtpermute;
    }
    for(int i=n-1;i>idx;i--){
        if(permutation[i]>permutation[idx]){
            swap(nxtpermute[i],nxtpermute[idx]);
            break;
        }
    }
    reverse(nxtpermute.begin()+idx+1,nxtpermute.end());
    return nxtpermute;
}