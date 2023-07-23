
bool comp(vector<int> &a, vector<int> &b)
{
    return a[2] > b[2];
}

vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    sort(jobs.begin(), jobs.end(), comp);

    int maxmDead = 0;
    for (auto i : jobs)
    {
        maxmDead = max(maxmDead, i[1]);
    }
    set<int, greater<int>> st;
    for (int i = maxmDead; i > 0; i--)
    {
        st.insert(i);
    }
    int sum = 0, count = 0;
    for (int i = 0; i < jobs.size(); i++)
    {

        if (st.size() == 0 || jobs[i][1] < *st.rbegin())
        {
            continue;
        }

        auto aslot = st.lower_bound(jobs[i][1]);

        count++;
        sum += jobs[i][2];
        st.erase(aslot);
    }
    return {count, sum};
}