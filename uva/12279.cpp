#include <cstdio>

int main()
{
    int n;
    int c = 1;
    while (scanf("%d", &n), n != 0)
    {
        int a = 0, b = 0;
        while (n--)
        {
            int temp;
            scanf("%d", &temp);
            if (temp == 0)
                a++;
            else if (temp >= 1 && temp <= 99)
                b++;
        }
        printf("Case %d: %d\n", c++, b - a);
    }
}