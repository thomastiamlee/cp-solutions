#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        printf("Case %d: %d\n", i + 1, (k - 1 + p) % n + 1);
    }
}