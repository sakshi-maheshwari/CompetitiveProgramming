//https://www.codechef.com/problems/ALTARAY
#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0;
        cin >> n;
        int a[n], l[n];
        l[n - 1] = 1;
        for (int i = 0; i < n; i++)
        {
            long long temp = 0;
            cin >> temp;
            if (temp > 0)
                a[i] = 1;
            else
                a[i] = -1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] * a[i + 1] < 0)
                l[i] = l[i + 1] + 1;
            else
                l[i] = 1;
        }
        for (int i : l)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}