//https://www.codechef.com/problems/SUBINC
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
        int n = 0;
        ull count = 0;
        cin >> n;
        ull a[n], c[n];
        c[n - 1] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] <= a[i + 1])
                c[i] = c[i + 1] + 1;
            else
                c[i] = 1;
        }
        for (int i : c)
            count += i;
        cout << count << endl;
    }
    return 0;
}