// https://www.codechef.com/problems/AVGPR

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
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpi vector<pii>
#define vpl vector<pll>
#define printvector(a)    \
    for (auto i : a)      \
    {                     \
        cout << i << " "; \
    }                     \
    cout << endl;
#define printpair(a)                                \
    for (auto p : a)                                \
    {                                               \
        cout << p.first << " " << p.second << "\t"; \
    }                                               \
    cout << endl;
#define printtuple(a)                                                      \
    for (auto t : a)                                                       \
    {                                                                      \
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\t"; \
    }                                                                      \
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

// void Sieve (int n)
// {
//     bool p[n + 1];
//     memset(p, true, sizeof(p));
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (p[i] == true)
//         {
//             for (int j = i * i; j <= n; j += i)
//                 p[j] = false;
//         }
//     }
//     for (int i = 2; i <= n; i++)
//         if (p[i])
//             v.pb(i);
// }

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        ll n = 0, ans = 0;
        cin >> n;
        map<int, int> m;
        ll a[n];
        ll b[2000] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += 1000;
            b[a[i]]++;
        }
        for (int i = 0; i < 2000; i++)
            for (int j = 0; j < 2000; j++)
                if ((i + j) % 2 == 0)
                    if (b[i] && b[j] && b[(i + j) / 2])
                        if (i == j)
                            ans += b[i] * (b[i] - 1);
                        else
                            ans += b[i] * b[j];
        cout << ans / 2 << endl;
    }
    return 0;
}