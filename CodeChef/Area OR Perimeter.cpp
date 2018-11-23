//https://www.codechef.com/problems/AREAPERI
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
    int l = 0, b = 0;
    cin >> l >> b;
    ll a = l * b, p = 2 * (l + b);
    if (a > p)
        cout << "Area" << endl
             << a << endl;
    else if (a < p)
        cout << "Peri" << endl
             << p << endl;
    else
        cout << "Eq" << endl
             << a << endl;
    return 0;
}