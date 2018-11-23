//https://www.codechef.com/problems/FRK
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define printvector(a)     \
    for (int i : a)        \
    {                      \
        cout << i << "\t"; \
    }                      \
    cout << endl;

int main()
{
    fastio;
    int test = 0, ans = 0;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if ((s[i] == 'c' && s[i + 1] == 'h') || (s[i] == 'h' && s[i + 1] == 'e') || (s[i] == 'e' && s[i + 1] == 'f'))
            {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}