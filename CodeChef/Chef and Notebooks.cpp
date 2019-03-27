//https://www.codechef.com/problems/CNOTE

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
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
        ll x = 0, y = 0, n = 0, k = 0;
        cin >> x >> y >> k >> n;
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            ll p = 0, c = 0;
            cin >> p >> c;
            if (p >= (x - y) && c <= k)
                ans = true;
        }
        if (ans)
            cout << "LuckyChef\n";
        else
            cout << "UnluckyChef\n";
    }
    return 0;
}