// https://www.hackerrank.com/challenges/vector-sort/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    while (!v.empty())
    {
        cout << v.front() << " ";
        v.erase(v.begin());
    }
    cout << endl;
    return 0;
}
