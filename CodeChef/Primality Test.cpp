// https://www.codechef.com/problems/PRB01
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int i = 2, flag = 0;
        while (i < sqrt(n))
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}