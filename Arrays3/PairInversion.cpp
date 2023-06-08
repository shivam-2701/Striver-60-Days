#include<bits/stdc++.h>
using namespace std;
// https://www.youtube.com/watch?v=S6rsAlj_iB4&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=20
// For explanation watch the video
class Solution {
public:
    #define ll long long
    ll merge(vector<int> &arr,int l,int mid,int r){
    ll count=0;
    int n1=mid-l;
    int n2= r-mid+1;
    ll left[mid-l];
    ll right[r-mid +1];
    
    int j=mid;
    for(int i=l;i<mid;i++){
        //find the first element in right have which doesn't fulfill the given condition
        while(j<=r && arr[i]>2LL*arr[j]){
            j++;
        }
        count+=(j-mid);
    }
    
        
        
        
    for(int i=l,j=0;i<mid;i++,j++){
          left[j]=arr[i];
    }
    for(int i=mid,j=0;i<=r;i++,j++){
          right[j]=arr[i];
    }
    
    int k=l,i=0;
        j=0;
    while(i<mid-l and j<r-mid+1){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            k++;
            i++;
        }else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<mid-l){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<r-mid+1){
        arr[k]=right[j];
        j++;
        k++;
    }
    return count;
}
ll mergeSort(vector<int> & arr,int l,int r){
    if(l>=r){
        return 0;
    }
    ll ans=0;
   int mid= (l+r)/2;
  ans+= mergeSort(arr,l,mid);
  ans+= mergeSort(arr,mid+1,r);
  ans+= merge(arr,l,mid+1,r);
    return ans;
}
    int reversePairs(vector<int>& nums) {
        ll ans = mergeSort(nums,0,nums.size()-1);
        return (int)ans;
    }
};