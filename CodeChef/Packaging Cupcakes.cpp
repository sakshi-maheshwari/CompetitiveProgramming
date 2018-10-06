// https://www.codechef.com/problems/MUFFINS3/
#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a = 0;
        scanf("%d", &a);
        printf("%d\n", (a / 2) + 1);
    }
}