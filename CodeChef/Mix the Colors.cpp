//https://www.codechef.com/problems/MIXCOLOR
#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define printvector(a)     \
    for (int i : a)        \
    {                      \
        cout << i << "\t"; \
    }                      \
    cout << endl;

int main()
{
    fastio;
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0, c = 0;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> temp;
            m[temp]++;
            if (m[temp] > 1)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}