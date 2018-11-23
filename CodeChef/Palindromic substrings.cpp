//https://www.codechef.com/problems/STRPALIN
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
        string a, b;
        cin >> a >> b;
        int al = a.length(), bl = b.length();
        bool ans = false;
        unordered_map<char, bool> m;
        for (int i = 0; i < al; i++)
            m[a[i]] = true;
        for (int i = 0; i < bl; i++)
        {
            if (m[b[i]] == true)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}