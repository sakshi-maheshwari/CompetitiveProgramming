//https://www.codechef.com/problems/LECANDY

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

int main()
{
    fastio;
    int test = 0;
    cin >> test;
    while (test--)
    {
        ll n = 0, c = 0;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            c -= temp;
        }
        if (c >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}