//https://www.codechef.com/problems/TEMPLELA
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
        int n = 0, flag = 0;
        cin >> n;
        if (n % 2 == 0)
            flag = 1;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int x = ar[0], mid = (n + 1) / 2;
        if (x != 1)
            flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (i < mid)
            {
                if (ar[i] != ++x)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (ar[i] != --x)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}