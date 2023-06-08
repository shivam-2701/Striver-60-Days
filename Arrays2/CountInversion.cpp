#include <bits/stdc++.h> 
#define ll long long int
ll merge(ll *arr,int l,int mid,int r){
    ll count=0;
    int n1=mid-l;
    int n2= r-mid+1;
    ll left[mid-l];
    ll right[r-mid +1];
    for(int i=l,j=0;i<mid;i++,j++){
          left[j]=arr[i];
    }
    for(int i=mid,j=0;i<=r;i++,j++){
          right[j]=arr[i];
    }
    
    int k=l,i=0,j=0;
    while(i<mid-l and j<r-mid+1){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            k++;
            i++;
        }else{
            count+=(n1-i);
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
ll mergeSort(ll * arr,int l,int r){
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

long long getInversions(long long *arr, int n){
  ll count = mergeSort(arr,0,n-1);

    return count;
}