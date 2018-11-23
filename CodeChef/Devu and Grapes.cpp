//https://www.codechef.com/problems/DEVUGRAP
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
        ull n = 0, k = 0, ans = 0;
        cin >> n >> k;
        ull a[n], l[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            ull r = a[i] % k;
            if (r != 0)
            {
                if (a[i] < k)
                    ans += k - r;
                else
                    ans += min(r, ((a[i] / k) + 1) * k - a[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}