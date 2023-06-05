#include <cstdio>

int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t) == 2)
    {
        // velocity is distance over time
        printf("%d\n", v*t*2);
    }
}