#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int l;
    scanf("%d", &l);

    char a[l + 1];
    char b[l + 1];

    scanf("%s", a);
    scanf("%s", b);

    int o1 = 0;
    int o2 = 0;

    vector <int> counts(26, 0);

    for (int i = 0; i < l; i++)
    {
        if (a[i] == b[i])
        {
            o1++;
        }
        else
        {
            counts[a[i] - 'A']++;
        }
    }

    for (int i = 0; i < l; i++)
    {
        if (a[i] == b[i]) continue;
        if (counts[b[i] - 'A'] > 0)
        {
            counts[b[i] - 'A']--;
            o2++;
        }
    }

    printf("%d %d\n", o1, o2);
}