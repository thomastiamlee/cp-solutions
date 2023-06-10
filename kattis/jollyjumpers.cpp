#include <cstdio>
#include <algorithm>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        bool flags[n - 1];
        for (int i = 0; i < n - 1; i++)
            flags[i] = false;

        int previous;
        scanf("%d", &previous);

        bool jolly = true;

        for (int i = 1; i < n; i++)
        {
            int current;
            scanf("%d", &current);
            int diff = abs(current - previous);
            if (diff < 1 || diff >= n)
            {
                jolly = false;
            }
            else if (flags[diff - 1])
            {
                jolly = false;
            }
            else
            {
                flags[diff - 1] = true;
            }
            previous = current;
        }

        if (jolly)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
}