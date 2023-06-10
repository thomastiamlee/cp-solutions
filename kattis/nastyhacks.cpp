#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        int n = e - c;
        if (r == n)
            printf("does not matter\n");
        else if (r > n)
            printf("do not advertise\n");
        else
            printf("advertise\n");
    }
}