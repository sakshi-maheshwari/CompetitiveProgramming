// https://www.codechef.com/problems/ALPHABET
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char, int> v;
    int l = s.length(), n = 0;
    for (int i = 0; i < l; i++)
    {
        v[s[i]] = 1;
    }
    cin >> n;
    while (n--)
    {
        string t;
        cin >> t;
        int tl = t.length(), flag = 0;
        for (int i = 0; i < tl; i++)
        {
            if (v[t[i]] != 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}