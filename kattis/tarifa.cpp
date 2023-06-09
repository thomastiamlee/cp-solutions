#include <cstdio>

int main()
{
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);

    int excess = 0;
    while (n--)
    {
        int c;
        scanf("%d", &c);
        excess += x - c;
    }

    printf("%d\n", x + excess);
}