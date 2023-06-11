#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int g;
        scanf("%d", &g);
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        bool found = false;
        for (int i = 2; i < g; i++)
        {
            int c;
            scanf("%d", &c);

            if (!found && a <= c && b > a && b > c || a <= c && b < a && b < c)
            {
                printf("%d\n", i);
                found = true;
            }

            a = b;
            b = c;
        }
    }
}