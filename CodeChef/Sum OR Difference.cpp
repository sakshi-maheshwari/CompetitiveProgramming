//https://www.codechef.com/problems/DIFFSUM
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n1 = 0, n2 = 0;
    cin >> n1 >> n2;
    if (n1 > n2)
        cout << (n1 - n2) << endl;
    else
        cout << (n1 + n2) << endl;
    return 0;
}