#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        vector<int> cars(1000);
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            int c, p;
            scanf("%d %d", &c, &p);
            int target = i + p;
            if (target < 0 || target >= n)
            {
                valid = false;
            }
            else if (cars[target] == 0)
            {
                cars[target] = c;
            }
            else
            {
                valid = false;
            }               
        }

        if (valid)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d", cars[i]);
                if (i != n - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
}