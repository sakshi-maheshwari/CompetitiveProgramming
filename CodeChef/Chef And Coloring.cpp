//https://www.codechef.com/problems/COLOR
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
        int n = 0, m = 0;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> v;
        for (int i = 0; i < n; i++)
        {
            v[s[i]]++;
            if (v[s[i]] > m)
                m = v[s[i]];
        }
        cout << n - m << endl;
    }
}