#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int cold = 0;
    while (n--)
    {
        int c;
        scanf("%d", &c);
        if (c < 0)
            cold++;
    }
    printf("%d\n", cold);
}