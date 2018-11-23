//https://www.codechef.com/problems/BRACKETS
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

int max_balance(string s)
{
    int balance = 0, max_balance = 0, len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(')
            balance++;
        else
            balance--;
        max_balance = max(max_balance, balance);
    }
    return max_balance;
}

int main()
{
    fastio;
    int test = 0;
    cin >> test;
    while (test--)
    {
        string s, ans;
        cin >> s;
        int m = max_balance(s);
        for (int i = 0; i < m; i++)
            ans += '(';
        for (int i = 0; i < m; i++)
            ans += ')';
        cout << ans << endl;
    }
    return 0;
}