#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int maxm = 0, count = 0;
    unordered_map<char, int> freq;
    int l = 0, r = 0;
    while (r < s.size())
    {
        if (freq[s[r]] == 0)
        {
            freq[s[r]]++;
            count++;
            maxm = max(count, maxm);
            r++;
            // cout<<r<<"||"<<endl;
        }
        else
        {
            while (freq[s[r]] != 0 and l < r)
            {
                // cout<<l<<"&&"<<" "<<freq[s[r]]<<endl;
                count--;
                freq[s[l]]--;
                l++;
                maxm = max(count, maxm);
            }
            // cout<<"ek"<<endl;
        }
    }
    return maxm;
}