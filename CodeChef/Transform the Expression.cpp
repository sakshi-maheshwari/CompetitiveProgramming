// https://www.codechef.com/problems/ONP
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        stack<char> o;
        string e = "", a = "";
        cin >> e;
        int l = e.length();
        for (int i = 0; i < l; i++)
        {
            if (e[i] == '(')
            {
                o.push(e[i]);
            }
            else if (isalpha(e[i]))
            {
                a += e[i];
            }
            else if (e[i] == '+' || e[i] == '-' || e[i] == '*' || e[i] == '/' || e[i] == '^')
            {
                o.push(e[i]);
            }
            else
            {
                a += o.top();
                o.pop();
                o.pop();
            }
        }
        cout << a << endl;
    }
    return 0;
}