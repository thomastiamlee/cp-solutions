#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c || a * b == c || a - b == c || b - a == c || (a / b == c && a % b == 0) || (b / a == c && b % a == 0))
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
}