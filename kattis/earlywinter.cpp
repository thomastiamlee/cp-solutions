#include <cstdio>

int main()
{
    int n, dm, res = -1;
    bool found = false;
    scanf("%d %d", &n, &dm);
    for (int i = 0; i < n; i++)
    {
        int c;
        scanf("%d", &c);
        if (!found && c <= dm)
        {
            res = i;
            found = true;
        }
    }
    if (res != -1)
        printf("It hadn't snowed this early in %d years!\n", res);
    else
        printf("It had never snowed this early!\n");
}