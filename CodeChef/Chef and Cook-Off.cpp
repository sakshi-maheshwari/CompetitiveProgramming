//https://www.codechef.com/problems/CCOOK
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
        int c = 0;
        for (int i = 0; i < 5; i++)
        {
            int temp = 0;
            cin >> temp;
            if (temp == 1)
                c++;
        }
        cout << ans[c] << endl;
    }
    return 0;
}