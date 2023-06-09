#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    double total = 0.0;
    while (n--)
    {
        double q, y;
        scanf("%lf %lf", &q, &y);
        total += q * y;
    }
    printf("%lf", total);
}