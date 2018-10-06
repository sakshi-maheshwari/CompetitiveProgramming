// https://www.codechef.com/problems/CHEFSTLT
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int al = a.size(), bl = b.size(), min = 0, ac = 0, bc = 0, max = 0;
        for (int i = 0; i < al; i++)
        {
            if ((a[i] != b[i]) && ((a[i] != '?') && (b[i] != '?')))
            {
                min++;
            }
            if ((a[i] == '?') && (b[i] == '?'))
            {
                ac++;
            }
            if (((b[i] == '?') && (a[i] != '?')) || ((a[i] == '?') && (b[i] != '?')))
            {
                bc++;
            }
        }
        max = bc + ac + min;
        cout << min << " " << max << endl;
    }
    return 0;
}