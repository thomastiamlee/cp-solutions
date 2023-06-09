#include <cstdio>
#include <cmath>

int main()
{
    int n;
    scanf("%d", &n);

    int d = 2 + pow(2, n) - 1;
    printf("%d\n", d * d);
}