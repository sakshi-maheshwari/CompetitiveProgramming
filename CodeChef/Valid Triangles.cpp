// https://www.codechef.com/problems/FLOW013
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n1 = 0, n2 = 0, n3 = 0;
        cin >> n1 >> n2 >> n3;
        if (n1 <= 0 || n2 <= 0 || n3 <= 0 || n1 + n2 + n3 != 180)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}