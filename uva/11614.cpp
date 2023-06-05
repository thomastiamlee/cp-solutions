#include <cstdio>
#include <cmath>

int main()
{
    int n;

    scanf("%d", &n);
    while (n--)
    {
        long long x;
        scanf("%lld", &x);
        // Use summation formula n^2 + n = 2i, solve for the positive root
        double r = (-1 + sqrt(1 - 4 * -(x * 2))) / 2;
        // Disregard the decimal part
        printf("%d\n", (int)r);
    }
}