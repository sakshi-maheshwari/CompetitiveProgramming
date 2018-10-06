// https://www.codechef.com/problems/FLOW016
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long a = 0, b = 0;
        cin >> a >> b;
        int g = __gcd(a, b);
        cout << g << " " << (a * b) / g << endl;
    }
    return 0;
}