#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
            printf("%d is even\n", x);
        else
            printf("%d is odd\n", x);
    }
}