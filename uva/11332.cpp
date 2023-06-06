#include <cstdio>

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        while (n > 9)
        {
            // Basic adding of digits routine
            int sum = 0;
            while (n != 0)
            {
                sum += n % 10;
                n /= 10;
            }
            n = sum;
        }
        printf("%d\n", n);
    }
}