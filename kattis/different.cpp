#include <cstdio>

int main()
{
    long long unsigned int a, b;

    
    while (scanf("%llu %llu", &a, &b) == 2)
    {
        if (a > b)
        {
            printf("%llu\n", a - b);
        }
        else
        {
            printf("%llu\n", b - a);
        }
    }
}