#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        
        int highest = 0;

        while (n--)
        {
            int temp;
            scanf("%d", &temp);
            highest = max(temp, highest);
        }

        printf("Case %d: %d\n", i + 1, highest);
    }
}