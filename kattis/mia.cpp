#include <cstdio>
#include <algorithm>

using namespace std;

int isMia(int n1, int n2)
{
    return n1 == 1 && n2 == 2 || n1 == 2 && n2 == 1;
}

int isDouble(int n1, int n2)
{
    return n1 == n2;
}

int main()
{
    int a1, a2, b1, b2;
    int winner = -1;
    while (scanf("%d %d %d %d", &a1, &a2, &b1, &b2), a1 != 0 || a2 != 0 || b1 != 0 || b2 != 0)
    {
        if (isMia(a1, a2) && isMia(b1, b2))
            winner = 0;
        else if (isMia(a1, a2) && !isMia(b1, b2))
            winner = 1;
        else if (!isMia(a1, a2) && isMia(b1, b2))
            winner = 2;
        else if (isDouble(a1, a2) && isDouble(b1, b2))
        {
            if (a1 == b1) winner = 0;
            else if (a1 > b1) winner = 1;
            else winner = 2;
        }
        else if (isDouble(a1, a2) && !isDouble(b1, b2))
            winner = 1;
        else if (!isDouble(a1, a2) && isDouble(b1, b2))
            winner = 2;
        else {
            int val1 = max(a1, a2) * 10 + min(a1, a2);
            int val2 = max(b1, b2) * 10 + min(b1, b2);
            if (val1 == val2) winner = 0;
            else if (val1 > val2) winner = 1;
            else winner = 2;
        }

        if (winner == 0)
            printf("Tie.\n");
        else
            printf("Player %d wins.\n", winner);
    }
}