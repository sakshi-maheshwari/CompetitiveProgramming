//https://www.codechef.com/problems/COMPILER

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
        string s;
        cin >> s;
        int n = s.length(), bal = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '<')
                bal++;
            else if (s[i] == '>')
                bal--;
            if (bal < 0)
                break;
            if (bal == 0)
                ans = i + 1;
        }
        cout << ans << endl;
    }
    return 0;
}