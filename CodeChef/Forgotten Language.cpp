// https://www.codechef.com/problems/FRGTNLNG
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
        map<string, string> v;
        int n = 0, k = 0;
        cin >> n >> k;
        string names[n];
        for (int i = 0; i < n; i++)
        {
            cin >> names[i];
            v[names[i]] = "NO";
        }
        for (int i = 0; i < k; i++)
        {
            int tp = 0;
            cin >> tp;
            while (tp--)
            {
                string temp;
                cin >> temp;
                if (v[temp] == "NO")
                {
                    v[temp] = "YES";
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[names[i]] << "\t";
        }
        cout << endl;
    }
    return 0;
}