// https://www.codechef.com/problems/CHN09
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int l = a.size(), ca = 0, cb = 0;
        for (int i = l; i >= 0; i--)
        {
            if (a[i] == 'a')
            {
                ca++;
            }
            else if (a[i] == 'b')
            {
                cb++;
            }
        }
        cout << min(ca, cb) << endl;
    }
    return 0;
}
