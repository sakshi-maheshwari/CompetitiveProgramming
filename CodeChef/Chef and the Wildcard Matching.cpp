// https://www.codechef.com/problems/TWOSTR
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
        int al = a.size(), bl = b.size(), flag = 0;
        if (al != bl)
        {
            cout << "No" << endl;
        }
        else
        {
            for (int i = 0; i < al; i++)
            {
                if ((a[i] != b[i]) && ((a[i] != '?') && (b[i] != '?')))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}