#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int min;
    scanf("%d", &min);
    int minIndex = 0;
    for (int i = 1; i < n; i++)
    {
        int current;
        scanf("%d", &current);
        if (current < min)
        {
            min = current;
            minIndex = i;
        }
    }
    printf("%d\n", minIndex);
}