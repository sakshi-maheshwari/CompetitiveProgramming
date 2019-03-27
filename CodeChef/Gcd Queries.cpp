// https://www.codechef.com/problems/GCDQ

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
    ll test = 0;
    scanf("%lld", &test);
    while (test--)
    {
        ll n = 0, q = 0;
        scanf("%lld%lld", &n, &q);
        ll a[n], p[n + 1], s[n + 1];
        p[0] = 0;
        s[n] = 0;
        scanf("%lld", &a[0]);
        p[1] = a[0];
        for (int i = 1; i < n; i++)
        {
            scanf("%lld", &a[i]);
            p[i + 1] = __gcd(p[i], a[i]);
        }
        s[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
            s[i] = __gcd(s[i + 1], a[i]);
        for (int i = 0; i < q; i++)
        {
            ll l = 0, r = 0;
            scanf("%lld%lld", &l, &r);
            printf("%lld\n", __gcd(p[l - 1], s[r]));
        }
    }
    return 0;
}