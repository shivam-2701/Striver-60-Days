#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    int count = 0;
    int currXor = 0;
    for (int i = 0; i < n; i++)
    {
        currXor ^= arr[i];
        if (currXor == x)
        {
            count++;
        }
        int temp = currXor ^ x;
        if (mp.find(temp) != mp.end())
        {
            count += mp[temp];
        }
        mp[currXor]++;
        //         cout<<currXor<<" "<<temp<<" "<<count<<"||"<<endl;
    }
    //     for(auto i : mp){
    //         cout<<i.first<<" "<<i.second<<endl;
    //     }
    return count;
}