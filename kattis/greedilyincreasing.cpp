#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    
    vector <int> result;

    int p;
    scanf("%d", &p);
    result.push_back(p);

    n--;
    while (n--)
    {
        int c;
        scanf("%d", &c);
        if (c <= p)
            continue;
        result.push_back(c);
        p = c;
    }

    printf("%d\n", result.size());
    for (int i = 0; i < result.size(); i++)
    {
        printf("%d", result[i]);
        if (i != result.size() - 1)
            printf(" ");
    }
    printf("\n");
}