#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    for (int c = 0; c < t; c++)
    {
        int n;
        scanf("%d", &n);
        
        int current;
        scanf("%d", &current);

        int high = 0, low = 0;

        // Trick case: if the wall is equal to the previous wall, no counter should be incremented
        for (int i = 1; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp > current)
                high++;
            else if (temp < current)
                low++;
            current = temp;
        }

        printf("Case %d: %d %d\n", c + 1, high, low);
    }
}