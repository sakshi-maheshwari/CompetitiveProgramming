//https://www.codechef.com/problems/TADELIVE

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

bool sortdesc(const tuple<int, int, int> &a, const tuple<int, int, int> &b)
{
    return (get<0>(a) > get<0>(b));
}

int main()
{
    fastio;
    //ll test = 0;
    //cin >> test;
    //while (test != 0)
    //{
    int n = 0, x = 0, y = 0, tip = 0;
    cin >> n >> x >> y;
    vector<tuple<int, int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        v.pb(mt(0, temp, 0));
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        get<2>(v[i]) = temp;
        get<0>(v[i]) = abs(get<1>(v[i]) - get<2>(v[i]));
    }
    sort(v.begin(), v.end(), sortdesc);
    for (int i = 0; i < n; i++)
    {
        if (get<1>(v[i]) > get<2>(v[i]))
        {
            if (x > 0)
            {
                tip += get<1>(v[i]);
                x--;
            }
            else
            {
                tip += get<2>(v[i]);
                y--;
            }
        }
        else
        {
            if (y > 0)
            {
                tip += get<2>(v[i]);
                y--;
            }
            else
            {
                tip += get<1>(v[i]);
                x--;
            }
        }
    }
    cout << tip << endl;
    //}
    return 0;
}