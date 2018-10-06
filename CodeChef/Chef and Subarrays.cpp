// https://www.codechef.com/problems/CHEFARRP
#include <bits/stdc++.h>
using namespace std;

map<int, int> v;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, count = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int s = 0, p = 1;
                for (int k = i; k <= j; k++)
                {
                    s += ar[k];
                    p *= ar[k];
                }
                if (s == p)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}