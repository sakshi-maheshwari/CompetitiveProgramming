// https://www.codechef.com/problems/TICKETS5
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
        string s;
        cin >> s;
        int l = s.length(), flag = 0;
        if (s[0] == s[1])
        {
            flag = 1;
        }
        else
        {
            for (int i = 2; i < l; i++)
            {
                if (i % 2 == 0 && s[i] != s[0])
                {
                    flag = 1;
                    break;
                }
                else if (i % 2 == 1 && s[i] != s[1])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}