#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int t[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    int minIndex = -1;
    int minimum = 100;
    for (int i = 0; i < n - 2; i++)
    {
        int c = max(t[i], t[i + 2]);
        if (c < minimum)
        {
            minimum = c;
            minIndex = i;
        }
    }
    printf("%d %d\n", minIndex + 1, minimum);
}