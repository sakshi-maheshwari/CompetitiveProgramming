// https://www.codechef.com/problems/TLG
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, s = 0, t = 0, lead = 0, winner = 0;
    cin >> n;
    while (n--)
    {
        int p = 0, q = 0, l = 0, w = 0;
        cin >> p >> q;
        s += p;
        t += q;
        if (s > t)
        {
            l = s - t;
            w = 1;
        }
        else
        {
            l = t - s;
            w = 2;
        }
        if (l > lead)
        {
            lead = l;
            winner = w;
        }
    }
    cout << winner << " " << lead;
    return 0;
}