//https://www.codechef.com/problems/FLOW015
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
        int y = 0, c = 0;
        y = readInt();
        int x = ((y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400) % 7 + 1;
        switch (x)
        {
        case 1:
            cout << "monday" << endl;
            break;
        case 2:
            cout << "tuesday" << endl;
            break;
        case 3:
            cout << "wednesday" << endl;
            break;
        case 4:
            cout << "thursday" << endl;
            break;
        case 5:
            cout << "friday" << endl;
            break;
        case 6:
            cout << "saturday" << endl;
            break;
        case 7:
            cout << "sunday" << endl;
            break;
        }
    }
    return 0;
}