//https://www.codechef.com/problems/RD19
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
        int n = 0, c = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        c = __gcd(a[0], a[1]);
        for (int i = 2; i < n; i++)
            c = __gcd(c, a[i]);
        if (c == 1)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}