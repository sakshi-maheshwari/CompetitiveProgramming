// https://www.codechef.com/problems/TEST/

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (true)
    {
        cin >> n;
        if (n != 42)
        {
            cout << n << "\n";
        }
        else
        {
            break;
        }
    }
    return 0;
}