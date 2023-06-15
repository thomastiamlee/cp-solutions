#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int balloons[n];

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &balloons[i]);
    }

    // Just need to do a linear scan from left to right
    // Greedy approach is sufficient; once you encounter a balloon that is not popped yet from the left,
    // then there is a need to shoot an arrow from that height
    for (int i = 0; i < n; i++)
    {
        if (balloons[i] != -1)
        {
            c++;
            int h = balloons[i];
            for (int j = i; j < n; j++)
            {
                if (h == balloons[j])
                {
                    h--;
                    balloons[j] = -1;
                }
                if (h < 1)
                {
                    break;
                }
            }
        }
    }

    printf("%d\n", c);
}