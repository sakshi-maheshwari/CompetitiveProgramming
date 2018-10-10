// https://www.hackerrank.com/challenges/vector-erase/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int e = 0;
    cin >> e;
    v.erase(v.begin() + e - 1);
    int s = 0;
    cin >> s >> e;
    v.erase(v.begin() + s - 1, v.begin() + e - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
