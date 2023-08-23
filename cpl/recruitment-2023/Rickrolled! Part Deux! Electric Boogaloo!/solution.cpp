#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

long long int lookup[11][100001];

int main()
{
  int t;
  scanf("%d", &t);

  while (t--)
  {
    long long int v, n;
    scanf("%lld %lld", &v, &n);

    
    lookup[0][0] = 1;
    for (int i = 1; i <= 10; i++)
    {
      lookup[i][0] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
      lookup[0][i] = v * lookup[0][i - 1] % 1000000007;
    }
    for (int i = 1; i <= 10; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        lookup[i][j] = (lookup[i - 1][j - 1] + lookup[i][j - 1] * (v-1) % 1000000007) % 1000000007;
      }
    }

    printf("%lld\n", lookup[10][n]);
  }
}