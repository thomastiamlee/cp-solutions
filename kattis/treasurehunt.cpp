#include <cstdio>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    char map[r][c];
    for (int i = 0; i < r; i++)
    {
        char line[500];
        scanf("%s", line);
        for (int j = 0; j < c; j++)
        {
            map[i][j] = line[j];
        }
    }

    int moves = 0;
    int cr = 0;
    int cc = 0;
    while (true)
    {
        if (cr < 0 || cr >= r || cc < 0 || cc >= c)
        {
            printf("Out\n");
            break;
        }
        else if (map[cr][cc] == 'T')
        {
            printf("%d\n", moves);
            break;
        }
        else if (map[cr][cc] == 'X')
        {
            printf("Lost\n");
            break;
        }
        moves++;
        char current = map[cr][cc];
        
        map[cr][cc] = 'X';
        switch(current)
        {
            case 'N': cr--; break;
            case 'W': cc--; break;
            case 'E': cc++; break;
            case 'S': cr++; break;
        }
    }
}