// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        a[i] = vector<int>(k);
        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}