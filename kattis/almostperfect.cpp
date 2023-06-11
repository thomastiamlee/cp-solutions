#include <cstdio>
#include <algorithm>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int max = n;
        int total = 1;
        for (int i = 2; i < max; i++)
        {
            if (n % i == 0)
            {
                total += i;
                if (n / i != i)
                    total += n / i;
                max = n / i;
            }
        }
        if (total == n)
        {
            printf("%d perfect\n", n);
        }
        else if (abs(total - n) <= 2)
        {
            printf("%d almost perfect\n", n);
        }
        else
        {
            printf("%d not perfect\n", n);
        }
    }
}