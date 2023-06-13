#include <cstdio>

int main()
{
    char data[300];
    scanf("%s", data);

    int p1 = 0;
    int p2 = 0;
    int ptr = 0;
    bool old = true;
    int winner = -1;
    while (data[ptr] != '\0')
    {
        char p = data[ptr++];
        int s = data[ptr++] - '0';
        if (p == 'A')
            p1 += s;
        else
            p2 += s;
        if (old && p1 >= 11)
        {
            winner = 1;
            break;
        }
        else if (old && p2 >= 11)
        {
            winner = 2;
            break;
        }
        else if (old && p1 == 10 && p2 == 10)
        {
            old = false;
        }
        else if (!old && p1 - p2 >= 2)
        {
            winner = 1;
            break;
        }
        else if (!old && p2 - p1 >= 2)
        {
            winner = 2;
            break;
        }
    }

    printf(winner == 1 ? "A\n" : "B\n");
}