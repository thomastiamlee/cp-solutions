#include <cstdio>
#include <cmath>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int r, c;
        scanf("%d %d", &r, &c);

        // Subtract two from the row and column, as the border cells do not need to be patrolled
        // Divide the row and column by 3, as each sonar beam can cover three cells along the axis
        int rl = (int)ceil((r - 2) / 3.0);
        int cl = (int)ceil((c - 2) / 3.0);

        printf("%d\n", rl * cl);
    }
}
