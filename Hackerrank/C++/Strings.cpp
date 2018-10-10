// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char t = a[0];
    a[0] = b[0];
    b[0] = t;
    cout << a << " " << b << endl;
    return 0;
}