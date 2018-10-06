// https://www.codechef.com/problems/FLOW006

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, sum = 0;
        cin >> n;
        while (n != 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}