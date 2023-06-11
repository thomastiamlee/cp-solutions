#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d", &n);
    bool sense = true;
    for (int i = 1; i <= n; i++)
    {
        char next[15];
        scanf("%s", next);

        if (strcmp(next, "mumble") == 0)
            continue;
        int val = atoi(next);
        if (val != i)
        {
            sense = false;
        }
    }
    printf("%s\n", sense ? "makes sense\n" : "something is fishy\n");
}