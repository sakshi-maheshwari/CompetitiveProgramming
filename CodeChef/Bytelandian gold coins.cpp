// https://www.codechef.com/problems/COINS
#include <bits/stdc++.h>
using namespace std;

map<long long int, long long int> c;

long long int count(long long int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (c[n] > 0)
    {
        return c[n];
    }
    else
    {
        c[n] = max(n, count(n / 2) + count(n / 3) + count(n / 4));
    }
}

int main()
{
    long long int n = 0;
    while (cin >> n)
        cout << count(n) << endl;
    return 0;
}
