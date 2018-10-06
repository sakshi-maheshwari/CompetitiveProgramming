// https://www.codechef.com/problems/JDELAY
#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, c = 0;
        cin >> n;
        while (n--)
        {
            int s = 0, j = 0;
            cin >> s >> j;
            if (j - s > 5)
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
