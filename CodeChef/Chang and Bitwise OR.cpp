// https://www.codechef.com/problems/CHNGOR

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
#define mt make_tuple
#define um unordered_map
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
#define printtuple(a)                                                        \
    for (auto t : a)                                                         \
    {                                                                        \
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\t\t"; \
    }                                                                        \
    cout << endl;
#define printmap(a)                             \
    for (auto i = a.begin(); i != a.end(); i++) \
    {                                           \
        cout << i->first << " " << i->second;   \
    }                                           \
    cout << endl;

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        ll n = 0, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll temp = 0;
            cin >> temp;
            ans |= temp;
        }
        cout << ans << endl;
    }
    return 0;
}