//https://www.codechef.com/problems/MOVIEWKN
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, max = 0, index = 0;
        cin >> n;
        int l[n], r[n];
        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];
        for (int i = 0; i < n; i++)
        {
            if (l[i] * r[i] > max)
            {
                index = i;
                max = l[i] * r[i];
            }
            else if (l[i] * r[i] == max)
            {
                if (r[i] > r[index])
                    index = i;
            }
        }
        cout << index + 1 << endl;
    }
}