#include <cstdio>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (m >= n)
    {
        int left = m - n;
        printf("Dr. Chaz will have %d %s of chicken left over!\n", left, left > 1 ? "pieces" : "piece");
    }
    else
    {
        int left = n - m;
        printf("Dr. Chaz needs %d more %s of chicken!", left, left > 1 ? "pieces" : "piece");
    }
}