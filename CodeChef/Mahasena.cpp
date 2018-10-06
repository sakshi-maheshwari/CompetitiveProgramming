// https://www.codechef.com/problems/AMR15A
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0, even = 0, odd = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even > odd)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
    return 0;
}