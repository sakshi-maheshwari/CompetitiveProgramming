//https://www.codechef.com/problems/CHEFSTUD
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
    int test = 0;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int l = s.length(), count = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '<')
                s[i] = '>';
            else if (s[i] == '>')
                s[i] = '<';
        }
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == '>' && s[i + 1] == '<')
            {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}