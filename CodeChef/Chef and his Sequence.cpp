// https://www.codechef.com/problems/CHEFSQ
#include <bits/stdc++.h>
using namespace std;

//#define for(c, s, e) for (int c = s; c < e; c++)

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int ln = 0, lf = 0, j = 0, count = 0;
        cin >> ln;
        int n[ln];
        for (int i = 0; i < ln; i++)
        {
            cin >> n[i];
        }
        cin >> lf;
        int f[lf];
        for (int i = 0; i < lf; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < ln; i++)
        {
            if (n[i] == f[j])
            {
                count++;
                j++;
            }
        }
        if (count != lf)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}