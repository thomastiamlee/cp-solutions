#include <cstdio>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Solve for n: n * y + x = n
    if (x == 0 && y == 1) // infinite solutions
        printf("ALL GOOD\n");
    else if (y == 1)
        printf("IMPOSSIBLE\n"); // no solution
    else
        printf("%lf\n", -x / (y - 1.0)); // one solution
}