//https://www.codechef.com/problems/RECTANGL
#include <bits/stdc++.h>
using namespace std;

template <class T = int>
inline T readInt();

static const int buf_size = 4096;

inline int getChar()
{
    static char buf[buf_size];
    static int len = 0, pos = 0;
    if (pos == len)
        pos = 0, len = fread(buf, 1, buf_size, stdin);
    if (pos == len)
        return -1;
    return buf[pos++];
}

inline int readChar()
{
    int c = getChar();
    while (c <= 32)
        c = getChar();
    return c;
}

template <class T>
inline T readInt()
{
    int s = 1, c = readChar();
    T x = 0;
    if (c == '-')
        s = -1, c = getChar();
    while ('0' <= c && c <= '9')
        x = x * 10 + c - '0', c = getChar();
    return s == 1 ? x : -x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test = readInt();
    while (test--)
    {
        int a = readInt(), b = readInt(), c = readInt(), d = readInt();
        if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c) || (a == b == c == d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}