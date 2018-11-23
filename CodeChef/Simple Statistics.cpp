//https://www.codechef.com/problems/SIMPSTAT
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
        int n = 0, k = 0;
        cin >> n >> k;
        deque<int> d;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            d.push_back(temp);
        }
        sort(d.begin(), d.end());
        for (int i = 0; i < k; i++)
        {
            d.pop_front();
            d.pop_back();
        }
        double ans = (double)accumulate(d.begin(), d.end(), 0.0) / (double)(n - 2 * k);
        printf("%.6f\n", ans);
    }
    return 0;
}