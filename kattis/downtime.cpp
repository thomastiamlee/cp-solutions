#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int times[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &times[i]);
    }
    
    int minCount = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        int j = i + 1;
        while (j < n && times[j] < times[i] + 1000)
        {
            c++;
            j++;
        }
            
        minCount = max(minCount, c);
    }

    printf("%d\n", (int)ceil(minCount /(double)k));
}