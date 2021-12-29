#include <bits/stdc++.h>
using namespace std;

// Time: O(N log N)
// Space: O(N)
// https://www.spoj.com/problems/AGGRCOW/
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int N, C;
        cin >> N >> C;
        int stalls[N];
        for (int i = 0; i < N; i++)
        {
            cin >> stalls[i];
        }
        sort(stalls, stalls + N);
        int low = 0, mid, high = stalls[N - 1], best = 0;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            int count = 1, left = 0;
            for (int i = 1; i < N && count < C; i++)
            {
                if (stalls[i] - stalls[left] >= mid)
                {
                    left = i;
                    count++;
                }
            }
            if (count >= C)
            {
                best = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << best << endl;
    }
}