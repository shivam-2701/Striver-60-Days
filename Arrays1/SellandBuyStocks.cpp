#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    int maxProfit=INT_MIN;
    int n= prices.size();   
    int minPrice=INT_MAX;
    minPrice=prices[0];
    for(int i=1;i<n;i++){
        int curr= prices[i]-minPrice;
        maxProfit=max(curr,maxProfit);
        minPrice=min(prices[i],minPrice);
    }
    return maxProfit<0 ? 0 : maxProfit ;
    
}