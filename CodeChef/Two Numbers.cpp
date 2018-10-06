// https://www.codechef.com/problems/TWONMS
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
        long long int a = 0, b = 0, n = 0;
        cin >> a >> b >> n;
        if (n % 2 == 0)
        {
            cout << max(a, b) / min(a, b) << endl;
        }
        else
        {
            if (2 * a > b)
            {
                cout << 2 * a / b << endl;
            }
            else
            {
                cout << b / (2 * a) << endl;
            }
        }
    }
    return 0;
}