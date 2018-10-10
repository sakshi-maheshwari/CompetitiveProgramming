// https://www.hackerrank.com/challenges/cpp-sets/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s;
    int q = 0;
    cin >> q;
    while (q--)
    {
        int y = 0, x = 0;
        cin >> y >> x;
        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
            set<int>::iterator it = s.find(x);
            if (it != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        }
    }
    return 0;
}
