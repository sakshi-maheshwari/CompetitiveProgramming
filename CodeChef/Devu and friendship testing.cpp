// https://www.codechef.com/problems/CFRTEST
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
        int n = 0, count = 0;
        cin >> n;
        map<int, int> v;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            if (v[temp] == 0)
            {
                count++;
                v[temp]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}