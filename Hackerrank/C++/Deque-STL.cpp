// https://www.hackerrank.com/challenges/deque-stl/problem
#include <iostream>
#include <deque>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    std::deque<int> Qi(k);
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
        {
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    for (; i < n; ++i)
    {
        printf("%d ", arr[Qi.front()]);
        while ((!Qi.empty()) && Qi.front() <= i - k)
        {
            Qi.pop_front();
        }
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
        {
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    printf("%d\n", arr[Qi.front()]);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}