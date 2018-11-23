//https://www.codechef.com/problems/CK87MEDI
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
    string ans[] = {"Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"};
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0, k = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << a[(n + k + 1) / 2 - 1] << endl;
    }
    return 0;
}