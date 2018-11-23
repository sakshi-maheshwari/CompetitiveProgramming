//https://www.codechef.com/problems/CO92JUDG
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
        int n = 0;
        cin >> n;
        int a[n], b[n], ta = 0, tb = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        ta = accumulate(a, a + n, 0) - *max_element(a, a + n);
        tb = accumulate(b, b + n, 0) - *max_element(b, b + n);
        if (ta < tb)
            cout << "Alice" << endl;
        else if (ta > tb)
            cout << "Bob" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}