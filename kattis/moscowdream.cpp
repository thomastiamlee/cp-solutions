#include <cstdio>

int main()
{
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    bool valid = true;
    if (a == 0 || b == 0 || c == 0)
        valid = false;
    if (a + b + c < n)
        valid = false;
    if (n < 3)
        valid = false;
    
    if (valid)
        printf("YES\n");
    else
        printf("NO\n"); 
}