#include <cstdio>

int main()
{
    int p, a, b, c;
    while (scanf("%d %d %d %d", &p, &a, &b, &c), p != 0 || a != 0 || b != 0 || c != 0)
    {
        int total = 0;
        total += 80;
        if (a > p)
        {
            total += 40 - (a - p);
        }
        else
        {
            total += p - a;
        }
        p = a;
        total += 40;
        if (b < p)
        {
            total += 40 - (p - b);
        }
        else
        {
            total += b - p;
        }
        p = b;
        if (c > p)
        {
            total += 40 - (c - p);
        }
        else 
        {
            total += p - c;
        }

        printf("%d\n", total * 9);
    }
}