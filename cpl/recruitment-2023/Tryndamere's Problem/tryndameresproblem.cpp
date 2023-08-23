#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4)
    {
        int g = gcd(b, d);
        int l = b * d / g;
        int gold = l / b * a + l / d * c;
        printf("%d\n", gold);
    }
}