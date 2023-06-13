#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    
    int line[n];
    line[0] = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int c;
        scanf("%d", &c);
        line[c + 1] = i + 2;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", line[i]);
        if (i != n - 1)
            printf(" ");
    }
}