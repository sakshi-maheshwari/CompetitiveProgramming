// https://www.codechef.com/problems/ICPC16A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x2 == x1)
        {
            if (y1 > y2)
            {
                cout << "down" << endl;
            }
            else
            {
                cout << "up" << endl;
            }
        }
        else if (y2 == y1)
        {
            if (x1 > x2)
            {
                cout << "left" << endl;
            }
            else
            {
                cout << "right" << endl;
            }
        }
        else
        {
            cout << "sad" << endl;
        }
    }
    return 0;
}