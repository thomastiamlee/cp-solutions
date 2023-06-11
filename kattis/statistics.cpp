#include <cstdio>

int main()
{
    int n;
    int c = 1;
    while (scanf("%d", &n) == 1)
    {
        int min, max;
        scanf("%d", &min);
        max = min;
        n--;
        while (n--)
        {
            int current;
            scanf("%d", &current);
            if (current > max)
                max = current;
            if (current < min)
                min = current;
        }
        printf("Case %d: %d %d %d\n", c++, min, max, max - min);
    }
}