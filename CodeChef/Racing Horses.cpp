// https://www.codechef.com/problems/HORSES
#include <iostream>
using namespace std;

int absd(int a, int b);

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int *a;
        a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = absd(a[0], a[1]);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (absd(a[i], a[j]) < min)
                {
                    min = absd(a[i], a[j]);
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}

int absd(int a, int b)
{
    if ((a - b) < 0)
    {
        return (0 - (a - b));
    }
    else
    {
        return (a - b);
    }
}
