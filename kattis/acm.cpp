#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int m;

    int total = 0;
    int count = 0;
    vector <int> solved(26, 0);

    while (scanf("%d", &m), m != -1)
    {
        char p, verdict[10];
        scanf("%c", &p); // scan dummy space
        scanf("%c %s", &p, verdict);

        if (solved.at(p - 'A') != -1)
        {
            if (strcmp(verdict, "right") == 0)
            {
                total += m + 20 * solved.at(p - 'A');
                count++;
                solved.at(p - 'A') = -1;
            }
            else
            {
                solved.at(p - 'A')++;
            }
        }
    }

    printf("%d %d\n", count, total);
}