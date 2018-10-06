// https://www.codechef.com/problems/CIELRCPT
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int p = 0, count = 0;
        cin >> p;
        while (p != 0)
        {
            if (p > 2048)
            {
                count = p / 2048;
                p = p % 2048;
            }
            else
            {
                int r = 2048, i = 12;
                while (r > p)
                {
                    i--;
                    r = pow(2, i);
                }
                p = p - r;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}