//https://www.codechef.com/problems/CANDY123
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
        ll a, b;
        cin >> a >> b;
        ll na = sqrt(a), nb = (sqrt(4 * b + 1) - 1) / 2;
        if (na > nb)
            cout << "Limak" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}