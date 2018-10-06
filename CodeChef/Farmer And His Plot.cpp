// https://www.codechef.com/problems/RECTSQ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int l = 0, b = 0;
        cin >> l >> b;
        int g = __gcd(l, b);
        cout << (l * b) / (g * g) << endl;
    }
    return 0;
}