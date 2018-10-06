// https://www.codechef.com/problems/KTTABLE
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
        int A[n], ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ar[0] = A[0];
        for (int i = 1; i < n; i++)
        {
            ar[i] = A[i] - A[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            if (temp <= ar[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}