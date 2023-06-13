#include <cstdio>

int convert(int a)
{
    int right = a % 10;
    int middle = a / 10 % 10;
    int left = a / 100;
    return right * 100 + middle * 10 + left;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ac = convert(a);
    int bc = convert(b);
    printf("%d\n", ac > bc ? ac : bc);
}