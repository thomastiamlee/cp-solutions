#include <cstdio>
#include <cmath>

int main()
{
    double n;
    scanf("%lf", &n);
    printf("%d\n", (int)round(n * 5280.0 / 4854.0 * 1000.0));
}