bool comp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int maximumMeetings(vector<int> &start, vector<int> &end)
{

    vector<pair<int, int>> meet;
    for (int i = 0; i < start.size(); i++)
    {
        meet.push_back({start[i], end[i]});
    }
    sort(meet.begin(), meet.end(), comp);

    int count = 1;
    int last = meet[0].second;
    for (int i = 0; i < meet.size(); i++)
    {
        if (meet[i].first > last)
        {
            count++;
            last = meet[i].second;
        }
    }
    return count;
}