#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    if(l + r == 0)
    {
        printf("Not a moose\n");
    }
    else if (l == r)
    {
        printf("Even %d\n", l + r);
    }
    else
    {
        printf("Odd %d\n", max(l, r) * 2);
    }
}