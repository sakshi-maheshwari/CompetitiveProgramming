// https://www.codechef.com/problems/COPS
#include <bits/stdc++.h>
using namespace std;

#define for (s, n, c) for (int c = s; c < n; c++)

int main()
{
    //std::ios::sync_with_stdio(false);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int M = 0, x = 0, y = 0, i = 0, count = 0;
        cin >> M >> x >> y;
        int ar[M], house[101] = {0};
        for (0, M, i)
        {
            cin >> ar[i];
        }
        for (0, M, i)
        {
            int min = ar[i] - x * y, max = ar[i] + x * y, j = 0;
            if (min < 0)
            {
                min = 0;
            }
            if (max > 100)
            {
                max = 100;
            }
            for (min, max + 1, j)
            {
                house[j] = 1;
            }
        }
        for (1, 101, i)
        {
            if (house[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}