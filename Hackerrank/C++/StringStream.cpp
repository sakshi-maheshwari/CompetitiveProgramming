// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> v;
    stringstream ss(str);
    char ch;
    while (!ss.eof())
    {
        int t = 0;
        char ch;
        ss >> t >> ch;
        v.push_back(t);
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}