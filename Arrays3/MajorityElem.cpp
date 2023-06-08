#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /*

    Intuition

    If we had some way of counting instances of the majority element as +1+1 and instances of       any other element as -1−1, summing them would make it obvious that the majority element is       indeed the majority element.


    Algorithm

    Essentially, what Boyer-Moore does is look for a suffix sufsuf of nums where suf[0]suf[0] is the majority element in that suffix. To do this, we maintain a count, which is incremented whenever we see an instance of our current candidate for majority element and decremented whenever we see anything else. Whenever count equals 0, we effectively forget about everything in nums up to the current index and consider the current number as the candidate for majority element. It is not immediately obvious why we can get away with forgetting prefixes of nums - consider the following examples (pipes are inserted to separate runs of nonzero count).

    [7, 7, 5, 7, 5, 1 | 5, 7 | 5, 5, 7, 7 | 7, 7, 7, 7]

    Here, the 7 at index 0 is selected to be the first candidate for majority element. count will eventually reach 0 after index 5 is processed, so the 5 at index 6 will be the next candidate. In this case, 7 is the true majority element, so by disregarding this prefix, we are ignoring an equal number of majority and minority elements - therefore, 7 will still be the majority element in the suffix formed by throwing away the first prefix.



    */

    int majorityElement(vector<int> &nums)
    {
        int count = 0, curr = 0;

        for (int n : nums)
        {
            if (n == curr)
            {
                count++;
            }
            else
            {
                if (count == 0)
                {
                    curr = n;
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return curr;
    }
};