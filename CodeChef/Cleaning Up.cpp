//https://www.codechef.com/problems/CLEANUP

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
#define printvector(a)    \
    for (int i : a)       \
    {                     \
        cout << i << " "; \
    }                     \
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

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0, m = 0;
        cin >> n >> m;
        int a[n + 1];
        memset(a, 0, sizeof(a));
        while (m--)
        {
            int temp = 0;
            cin >> temp;
            a[temp]++;
        }
        vector<int> v;
        vector<int> c;
        vector<int> as;
        for (int i = 1; i <= n; i++)
            if (a[i] == 0)
                v.pb(i);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
                c.pb(v[i]);
            else
                as.pb(v[i]);
        }
        printvector(c);
        printvector(as);
    }
    return 0;
}