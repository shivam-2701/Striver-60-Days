int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n);
    sort(dt, dt + n);
    int l = 0, r = 0;
    int maxm = 0, count = 0;
    while (l < n && r < n)
    {
        if (at[l] <= dt[r])
        {
            count++;
            l++;
        }
        else
        {
            count--;
            r++;
        }
        maxm = max(maxm, count);
    }
    return maxm;
}