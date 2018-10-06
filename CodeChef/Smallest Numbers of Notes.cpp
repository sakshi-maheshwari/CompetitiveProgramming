// https://www.codechef.com/problems/FLOW005
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, tn = 0;
        cin >> n;
        tn = n / 100;
        n = n - tn * 100;
        tn = tn + n / 50;
        n = n - (n / 50) * 50;
        tn = tn + n / 10;
        n = n - (n / 10) * 10;
        tn = tn + n / 5;
        n = n - (n / 5) * 5;
        tn = tn + n / 2;
        n = n - (n / 2) * 2;
        tn = tn + n / 1;
        n = n - (n / 1) * 1;
        cout << tn << endl;
    }
    return 0;
}