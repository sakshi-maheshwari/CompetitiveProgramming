// https://www.codechef.com/problems/CHEFST
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t = 0;
    cin >> t;
    while (t--)
    {
        long long int n1 = 0, n2 = 0, m = 0, nmin = 0, s = 0;
        cin >> n1 >> n2 >> m;
        cout << max((n1 + n2 - m * (m + 1)), max(n1 - n2, n2 - n1)) << endl;
    }
    return 0;
}