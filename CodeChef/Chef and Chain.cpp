// https://www.codechef.com/problems/CHEFCH

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
        string s;
        cin >> s;
        int l = s.length();
        int cm = 0, cp = 0;
        for (int i = 0; i < l; i++)
        {
            if (i % 2 == 0 && s[i] != '+')
                cp++;
            else if (i % 2 == 1 && s[i] != '-')
                cp++;
            if (i % 2 == 0 && s[i] != '-')
                cm++;
            else if (i % 2 == 1 && s[i] != '+')
                cm++;
        }
        cout << min(cm, cp) << endl;
    }
    return 0;
}