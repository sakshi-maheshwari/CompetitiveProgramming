// https://www.codechef.com/problems/PRGIFT

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
#define um unordered_map
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpi vector<pii>
#define vpl vector<pll>
#define printvector(a)     \
    for (auto i : a)       \
    {                      \
        cout << i << "\t"; \
    }                      \
    cout << endl;
#define printpair(a)                                \
    for (auto p : a)                                \
    {                                               \
        cout << p.first << " " << p.second << "\t"; \
    }                                               \
    cout << endl;
#define printtuple(a)                                                        \
    for (auto t : a)                                                         \
    {                                                                        \
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\t\t"; \
    }                                                                        \
    cout << endl;
#define MOD 1000000007

bool prime(int n)
{
    int l = sqrt(n);
    for (int i = 2; i <= l; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        ll n = 0, k = 0, m = 0;
        bool flag = false;
        cin >> n >> k;
        ll a[n];
        ll b[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] % 2 == 0)
                m++;
            b[i] = m;
        }
        b[n] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
                if (b[i] - b[j] == k)
                {
                    flag = true;
                    break;
                }
            if (flag)
                break;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}