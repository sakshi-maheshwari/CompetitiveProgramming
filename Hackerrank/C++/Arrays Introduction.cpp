// https://www.hackerrank.com/challenges/arrays-introduction/problem
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
    int *a;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[n - 1 - i] << " ";
    }
    return 0;
}
