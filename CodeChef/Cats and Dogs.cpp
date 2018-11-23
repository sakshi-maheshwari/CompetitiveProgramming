//https://www.codechef.com/problems/CATSDOGS
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define printvector(a)     \
    for (int i : a)        \
    {                      \
        cout << i << "\t"; \
    }                      \
    cout << endl;

int main()
{
    fastio;
    int test = 0;
    cin >> test;
    while (test--)
    {
        ll c = 0, d = 0, l = 0;
        cin >> c >> d >> l;
        ll a = l / 4;
        if (l % 4 != 0 || a < d || a < ((c + d) - min(c, 2 * d)) || a > (c + d))
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}