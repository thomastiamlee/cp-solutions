#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

double getPrice(double p, double a, double b, double c, double d, double k)
{
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main()
{
    int p, a, b, c, d, n;
    
    // Time limit is sufficiently large; just do a linear scan
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    double maximum = getPrice(p, a, b, c, d, 1);
    double maxDiff = 0.0;

    for (int i = 1; i < n; i++)
    {
        double current = getPrice(p, a, b, c, d, i + 1);
        maximum = max(maximum, current);           
        maxDiff = max(maxDiff, maximum - current);
    }

    printf("%lf\n", maxDiff);
}