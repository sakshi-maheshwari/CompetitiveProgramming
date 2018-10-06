// https://www.codechef.com/problems/VCS
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
        map<int, int> v;
        int n = 0, m = 0, k = 0, x = 0, y = 0;
        cin >> n >> m >> k;
        for (int i = 0; i < m; i++)
        {
            int temp = 0;
            cin >> temp;
            v[temp] = 1;
        }
        for (int i = 0; i < k; i++)
        {
            int temp = 0;
            cin >> temp;
            v[temp]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 0)
            {
                y++;
            }
            else if (v[i] == 2)
            {
                x++;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}