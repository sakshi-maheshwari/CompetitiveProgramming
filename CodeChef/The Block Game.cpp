// https://www.codechef.com/problems/PALL01
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, rev = 0;
        cin >> n;
        int nc = n;
        while (nc != 0)
        {
            rev = (rev + nc % 10) * 10;
            nc = nc / 10;
        }
        if (rev / 10 == n)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "losses" << endl;
        }
    }
    return 0;
}