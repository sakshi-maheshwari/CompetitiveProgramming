//https://www.codechef.com/problems/SNCKYEAR
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
        if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
            cout << "HOSTED" << endl;
        else
            cout << "NOT HOSTED" << endl;
    }
    return 0;
}