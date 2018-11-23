//https://www.codechef.com/problems/STICKS
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
        int n = 0;
        cin >> n;
        vector<int> v;
        map<int, int> m;
        while (n--)
        {
            int temp = 0;
            cin >> temp;
            m[temp]++;
            if (m[temp] == 2)
            {
                v.push_back(temp);
                m[temp] = 0;
            }
        }
        sort(v.begin(), v.end());
        int s = v.size();
        if (s < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v[s - 1] * v[s - 2] << endl;
        }
    }
    return 0;
}