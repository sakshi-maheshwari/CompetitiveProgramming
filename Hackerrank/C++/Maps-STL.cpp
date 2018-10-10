// https://www.hackerrank.com/challenges/cpp-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    int q = 0;
    cin >> q;
    while (q--)
    {
        int t = 0, marks = 0;
        string name;
        map<string, int>::iterator it;
        cin >> t;
        cin >> name;
        switch (t)
        {
        case 1:
            cin >> marks;
            it = m.find(name);
            if (it != m.end())
            {
                it->second += marks;
            }
            else
            {
                m.insert(make_pair(name, marks));
            }
            break;
        case 2:
            m.erase(name);
            break;
        case 3:
            it = m.find(name);
            if (it != m.end())
            {
                cout << it->second << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            break;
        }
    }
    return 0;
}
