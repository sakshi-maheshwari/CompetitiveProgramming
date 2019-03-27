// https://www.codechef.com/problems/BUY1GET1

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
    ll test = 0;
    cin >> test;
    while (test--)
    {
        unordered_map<char, int> m;
        string s;
        cin >> s;
        int l = s.length(), c = 0;
        for (int i = 0; i < l; i++)
            m[s[i]]++;
        for (auto i = m.begin(); i != m.end(); i++)
            c += ceil((float)(i->second) / 2);
        cout << c << endl;
    }
    return 0;
}