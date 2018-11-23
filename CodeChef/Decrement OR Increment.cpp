//https://www.codechef.com/problems/DECINC
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
    //int test = 0;
    //cin >> test;
    //while (test--)
    //{
    int n = 0;
    cin >> n;
    if (n % 4 == 0)
        n++;
    else
        n--;
    cout << n << endl;
    //}
    return 0;
}