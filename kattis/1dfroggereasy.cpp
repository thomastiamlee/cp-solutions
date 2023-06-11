#include <cstdio>

int main()
{
    int n, s, m;
    scanf("%d %d %d", &n, &s, &m);

    int board[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &board[i]);\
        visited[i] = false;
    }

    int c = s - 1;
    int ctr = 0;

    while (true)
    {
        if (board[c] == m)
        {
            printf("magic\n");
            break;
        }
        if (c + board[c] < 0)
        {
            printf("left\n");
            ctr++;
            break;
        }
        if (c + board[c] >= n)
        {
            printf("right\n");
            ctr++;
            break;
        }
        if (visited[c])
        {
            printf("cycle\n");
            break;
        }
        visited[c] = true;
        c += board[c];
        ctr++;
    }
   
    printf("%d\n", ctr);
}