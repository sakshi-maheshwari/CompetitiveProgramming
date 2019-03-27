// https://www.codechef.com/problems/VALIDSTK

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define printvector(a)     \
    for (int i : a)        \
    {                      \
        cout << i << "\t"; \
    }                      \
    cout << endl;
#define printpair(a)                                  \
    for (auto p : a)                                  \
    {                                                 \
        cout << p.first << " " << p.second << "\t\t"; \
    }                                                 \
    cout << endl;
#define printtuple(a)                                                        \
    for (auto t : a)                                                         \
    {                                                                        \
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\t\t"; \
    }                                                                        \
    cout << endl;

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0, c = 0;
        bool flag = true;
        cin >> n;
        while (n--)
        {
            int temp = 0;
            cin >> temp;
            if (temp == 1)
                c++;
            else
                c--;
            if (c < 0)
                flag = false;
        }
        if (!flag)
            cout << "Invalid" << endl;
        else
            cout << "Valid" << endl;
    }
    return 0;
}