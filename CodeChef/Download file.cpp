//https://www.codechef.com/problems/DWNLD
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
        int n = 0, k = 0, t = 0, cost = 0;
        cin >> n >> k;
        while (n > 0)
        {
            int ti = 0, d = 0;
            while (t < k && n > 0)
            {
                cin >> ti >> d;
                t += ti;
                n--;
                cost = max(0, (t - k)) * d;
            }
            if (n <= 0)
                break;
            cin >> ti >> d;
            cost += ti * d;
            n--;
        }
        cout << cost << endl;
    }
    return 0;
}