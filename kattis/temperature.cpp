#include <cstdio>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    if (x == 0 && y == 1)
        printf("ALL GOOD\n");
    else if (y == 1)
        printf("IMPOSSIBLE\n");
    else
        printf("%lf\n", -x / (y - 1.0));
}