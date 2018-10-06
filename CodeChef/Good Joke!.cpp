// https://www.codechef.com/problems/RRJOKE
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
        int n = 0, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x = 0, y = 0;
            cin >> x >> y;
        }
        switch (n & 3)
        {
        case 0:
            count = n;
            break;
        case 1:
            count = 1;
            break;
        case 2:
            count = n + 1;
            break;
        case 3:
            count = 0;
            break;
        }
        cout << count << endl;
    }
    return 0;
}