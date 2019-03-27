//https://www.codechef.com/problems/TWTCLOSE

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

int main()
{
    fastio;
    //ll test = 0;
    //cin >> test;
    //while (test--)
    //{
    int n = 0, k = 0, count = 0;
    cin >> n >> k;
    int a[n + 1];
    memset(a, 0, sizeof(a));
    while (k--)
    {
        string s;
        cin >> s;
        if (s == "CLICK")
        {
            int c = 0;
            cin >> c;
            if (a[c] == 0)
            {
                a[c] = 1;
                count++;
            }
            else
            {
                a[c] = 0;
                count--;
            }
        }
        else
        {
            memset(a, 0, sizeof(a));
            count = 0;
        }
        //}
        cout << count << endl;
    }
    return 0;
}