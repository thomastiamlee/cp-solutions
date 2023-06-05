#include <cstdlib>
#include <cstdio>

int main()
{
    // need to use long long int because of the integer constraints
    long long a, b;
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        // contains a trick case; the input statement says the two integers can be given in reverse
        printf("%lld\n", llabs(b - a));
    }
}