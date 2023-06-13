#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int ta, tb, tc;
    if (a <= b && a <= c)
    {
        ta = a;
        if (b <= c)
        {
            tb = b;
            tc = c;
        }
        else 
        {
            tb = c;
            tc = b;
        }
    }
    else if (b <= a && b <= c)
    {
        ta = b;
        if (a <= c)
        {
            tb = a;
            tc = c;
        }
        else 
        {
            tb = c;
            tc = a;
        }
    }
    else if (c <= a && c <= b)
    {
        ta = c;
        if (a <= b)
        {
            tb = a;
            tc = b;
        }
        else 
        {
            tb = b;
            tc = a;
        }
    }
    a = ta, b = tb, c = tc;

    int diff1 = b - a;
    int diff2 = c - b;

    if (diff1 == diff2)
    {
        printf("%d\n", c + diff1 <= 100 ? c + diff1 : a - diff1);
    }
    else if (diff2 == diff1 * 2)
    {
        printf("%d\n", b + diff1);
    }
    else if (diff1 == diff2 * 2)
    {
        printf("%d\n", a + diff2);
    }
}