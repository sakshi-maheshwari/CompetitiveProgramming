//https://www.codechef.com/problems/SIMDISH
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test = 0;
    cin >> test;
    while (test--)
    {
        map<string, int> m;
        int c = 0;
        for (int i = 0; i < 4; i++)
        {
            string temp;
            cin >> temp;
            m[temp]++;
        }
        for (int i = 0; i < 4; i++)
        {
            string temp;
            cin >> temp;
            if (m[temp] != 0)
                c++;
        }
        if (c >= 2)
            cout << "similar" << endl;
        else
            cout << "dissimilar" << endl;
    }
    return 0;
}