// https://www.codechef.com/problems/LONGSEQ
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
        string d;
        cin >> d;
        int l = d.length();
        map<int, int> v;
        for (int i = 0; i < l; i++)
        {
            if (d[i] == '0')
            {
                v[0]++;
            }
            else
            {
                v[1]++;
            }
        }
        if (v[1] == 1 || v[0] == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}