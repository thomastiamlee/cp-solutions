#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    double w1, h1, w2, h2;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf %lf", &w1, &h1, &w2, &h2);
        double a = w1 / w2;
        double b = h1 / h2;
        double scaleFactor = min(w1 / w2, h1 / h2);

        double newWidth = w2 * scaleFactor;
        double newHeight = h2 * scaleFactor;

        printf("%.2lf %d %d\n", scaleFactor, (int)((w1 - newWidth) / 2.0), (int)((h1 - newHeight) / 2.0));
    }
    
    return 0;
}
