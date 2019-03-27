//https://www.codechef.com/problems/RAINBOWA

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
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0;
        cin >> n;
        bool ans = true;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> v;
        int i = 0;
        while (i < n)
        {
            int temp = a[i], c = 0;
            while (a[i] == temp && i < n)
            {
                c++;
                i++;
            }
            v.pb(mp(temp, c));
        }
        //printpair(v);
        if (v.size() != 13)
            ans = false;
        for (i = 0; i < 7 && ans; i++)
        {
            if (v[i].first != i + 1)
            {
                ans = false;
                break;
            }
        }
        for (i = 7; i <= 12 && ans; i++)
        {
            if (v[i].first != v[12 - i].first || v[i].second != v[12 - i].second)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}