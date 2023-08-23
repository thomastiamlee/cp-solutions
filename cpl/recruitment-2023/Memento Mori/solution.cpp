#include <cstdio>
#include <vector>

using namespace std;

unsigned long long int gcd(unsigned int a, unsigned int b)
{
  if (a == 0)
      return b;
  return gcd(b % a, a);
}

unsigned long long int power(unsigned long long int x, unsigned int y, unsigned int M)
{
  if (y == 0)
      return 1;

  unsigned long long int p = power(x, y / 2, M) % M;
  p = (p * p) % M;

  return (y % 2 == 0) ? p : (x * p) % M;
}

unsigned long long int modInverse(int A, int M)
{
  unsigned long long int g = gcd(A, M);
  return power(A, M - 2, M);
}

int main()
{
  int t;
  scanf("%d", &t);

  vector <unsigned long long int> lookup;
  lookup.push_back(0); 

  unsigned long long int counter = 1;
  for (int i = 1; i <= 100000; i++)
  {
    counter = counter * i % 1000000007;
    lookup.push_back(counter);
    //printf("%lu\n", lookup[i]);
  }


  while (t--)
  {
    int n, r;
    scanf("%d %d", &n, &r);
    if (r == 0 || n - r == 0)
    {
      printf("1\n");
    }
    else
    {
      unsigned long long int num = lookup[n];
      unsigned long long int den = lookup[r] * lookup[n - r] % 1000000007;
      printf("%llu\n",  num * modInverse(den, 1000000007) % 1000000007);
    }
  }
  
  return 0;
}