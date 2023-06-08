#include <bits/stdc++.h> 
using namespace std;
void swap(int &a,int &b){
   int temp;
    temp=a;
    a=b;
    b=temp;
}
void sort012(int *arr, int n)
{
   int l=0,mid=0,r=n-1;
    while(mid<=r){
        switch(arr[mid]){
            case 0:
                swap(arr[mid],arr[l]);
                l++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[r]);
                r--;
                break;
        }
    }
}