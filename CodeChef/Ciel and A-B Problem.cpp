//https://www.codechef.com/problems/CIELAB

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
    //ll test = 0;
    //cin >> test;
    //while (test--)
    //{
    int a = 0, b = 0;
    cin >> a >> b;
    int c = a - b;
    int l = ceil(log10(c));
    if (l == 1)
        c--;
    else
    {
        if (c % 10 == 9)
            c--;
        else
            c++;
    }
    cout << c << endl;
    //}
    return 0;
}