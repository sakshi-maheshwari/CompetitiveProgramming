// https://www.codechef.com/problems/TRISQ
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        int m = n / 2;
        cout << m * (m - 1) / 2 << endl;
    }
    return 0;
}
