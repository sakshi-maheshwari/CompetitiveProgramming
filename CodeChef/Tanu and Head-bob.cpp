// https://www.codechef.com/problems/HEADBOB
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
        char *a = NULL;
        a = new char[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, flag = 0;
        while (i < n)
        {
            if (a[i] == 'I')
            {

                flag = 1;
                break;
            }
            else if (a[i] == 'Y')
            {
                flag = 2;
                break;
            }
            i++;
        }
        if (flag == 0)
        {
            cout << "NOT SURE" << endl;
        }
        else if (flag == 1)
        {
            cout << "INDIAN" << endl;
        }
        else
        {
            cout << "NOT INDIAN" << endl;
        }
        delete[] a;
        a = NULL;
    }
    return 0;
}