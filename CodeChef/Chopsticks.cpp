//https://www.codechef.com/problems/TACHSTCK

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
#define printpair(a)                                  \
    for (auto p : a)                                  \
    {                                                 \
        cout << p.first << " " << p.second << "\t\t"; \
    }                                                 \
    cout << endl;

int main()
{
    fastio;
    //int test = 0;
    //cin >> test;
    //while (test--)
    //{
    ll n = 0, d = 0, ans = 0;
    cin >> n >> d;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll i = 0;
    while (i < n - 1)
    {
        if (a[i + 1] - a[i] <= d)
        {
            ans++;
            i++;
        }
        i++;
    }
    cout << ans << endl;
    //}
    return 0;
}