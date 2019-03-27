//https://www.codechef.com/problems/CSUB

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
        ull n = 0, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                c++;
        cout << c * (c + 1) / 2 << endl;
    }
    return 0;
}