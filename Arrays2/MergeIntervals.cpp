#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<pair<int,int>> mIntervals;
    for(int i=0;i<intervals.size();i++){
        mIntervals.push_back(make_pair(intervals[i][0],intervals[i][1]));
    }
    sort(mIntervals.begin(),mIntervals.end());

    int currSt=mIntervals[0].first;

    int currEn=mIntervals[0].second;
    vector<vector<int>> ans;
    for(int i=1;i<mIntervals.size();i++){
        if(mIntervals[i].first<=currEn){
            if(mIntervals[i].second>currEn){
            currEn=mIntervals[i].second;
            }
            
        }else{
          vector<int>temp;
            temp.push_back(currSt);
            temp.push_back(currEn);
            ans.push_back(temp);
            currSt=mIntervals[i].first;
            currEn=mIntervals[i].second;
        }
    }
    if(ans.empty() || ans.back()[1]!=currEn){
        vector<int> temp;
              temp.push_back(currSt);
            temp.push_back(currEn);
            ans.push_back(temp);
    }
    return ans;
    
    
}
