// https://www.codechef.com/problems/CHOPRT
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        if (a > b)
        {
            cout << ">" << endl;
        }
        else if (a < b)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}