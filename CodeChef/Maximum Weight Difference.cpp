// https://www.codechef.com/problems/MAXDIFF
#include <bits/stdc++.h>
using namespace std;
#define long long int int;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0, son = 0, son1 = 0;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int s = accumulate(v.begin(), v.end(), 0);
        for (int i = 0; i < k; i++)
        {
            son += v[i];
        }
        for (int i = n - 1; i > n - 1 - k; i--)
        {
            son1 += v[i];
        }
        cout << max(abs(s - 2 * son), abs(s - 2 * son1)) << endl;
    }
    return 0;
}