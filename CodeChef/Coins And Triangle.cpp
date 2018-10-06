// https://www.codechef.com/problems/TRICOIN
#include <bits/stdc++.h>
using namespace std;

#define for (s, n, c) for (int c = s; c < n; c++)

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        long int n = 0;
        cin >> n;
        cout << ((int)sqrt(1 + 8 * n) - 1) / 2 << endl;
    }
    return 0;
}