#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int at, bt, ct;
    if (a < b && a < c)
    {
        at = a;
        if (b < c)
        {
            bt = b;
            ct = c;
        }
        else
        {
            bt = c;
            ct = b;
        }
    }
    else if (b < a && b < c)
    {
        at = b;
        if (a < c)
        {
            bt = a;
            ct = c;
        }
        else
        {
            bt = c;
            ct = a;
        }
    }
    else if (c < a && c < b)
    {
        at = c;
        if (a < b)
        {
            bt = a;
            ct = b;
        }
        else
        {
            bt = b;
            ct = a;
        }
    }

    a = at, b = bt, c = ct;

    char key[4];
    scanf("%s", key);

    for (int i = 0; i < 3; i++)
    {
        if (key[i] == 'A')
        {
            printf("%d", a);
        }
        else if (key[i] == 'B')
        {
            printf("%d", b);
        }
        else if (key[i] == 'C')
        {
            printf("%d", c);
        }
        if (i != 2)
        {
            printf(" ");
        }
    }
    printf("\n");
}