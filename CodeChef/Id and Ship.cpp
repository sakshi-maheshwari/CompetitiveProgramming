// https://www.codechef.com/problems/FLOW010
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        char n = ' ';
        cin >> n;
        switch (n)
        {
        case 'B':
        case 'b':
            cout << "BattleShip" << endl;
            break;
        case 'c':
        case 'C':
            cout << "Cruiser" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Destroyer" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Frigate" << endl;
            break;
        }
    }
    return 0;
}