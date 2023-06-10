#include <cstdio>

int main()
{
    int board[4][4];
    int move;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    scanf("%d", &move);

    if (move == 0 || move == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            int buffer = -1;
            int previous = -1;
            int temp[4];
            int ctr = 0;
            int streak = 0;

            if (move == 0)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (board[i][j] == 0) continue;
                    if (board[i][j] != previous || streak >= 2)
                    {
                        if (previous != -1)
                        {
                            temp[ctr++] = buffer;    
                        }
                        previous = board[i][j];
                        buffer = previous;
                        streak = 1;
                    }
                    else
                    {
                        buffer += board[i][j];
                        streak++;
                    }
                }
            }
            else 
            {
                for (int j = 3; j >= 0; j--)
                {
                    if (board[i][j] == 0) continue;
                    if (board[i][j] != previous || streak >= 2)
                    {
                        if (previous != -1)
                        {
                            temp[ctr++] = buffer;    
                        }
                        previous = board[i][j];
                        buffer = previous;
                        streak = 1;
                    }
                    else
                    {
                        buffer += board[i][j];
                        streak++;
                    }
                }
            }
            
            if (previous != -1)
            {
                temp[ctr++] = buffer;
            }
            for (int j = 0; j < 4; j++)
            {
                board[i][j] = 0;
            }        
            if (move == 0)
            {
                for (int j = 0; j < ctr; j++)
                {
                    board[i][j] = temp[j];
                }   
            }
            else
            {
                for (int j = 0; j < ctr; j++)
                {
                    board[i][3 - j] = temp[j];
                }
            }
        }
    }
    else if (move == 1 || move == 3)
    {
        for (int i = 0; i < 4; i++)
        {
            int buffer = -1;
            int previous = -1;
            int temp[4];
            int ctr = 0;
            int streak = 0;

            if (move == 1)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (board[j][i] == 0) continue;
                    if (board[j][i] != previous || streak >= 2)
                    {
                        if (previous != -1)
                        {
                            temp[ctr++] = buffer;    
                        }
                        previous = board[j][i];
                        buffer = previous;
                        streak = 1;
                    }
                    else
                    {
                        buffer += board[j][i];
                        streak++;
                    }
                }
            }
            else
            {
                for (int j = 3; j >= 0; j--)
                {
                    if (board[j][i] == 0) continue;
                    if (board[j][i] != previous || streak >= 2)
                    {
                        if (previous != -1)
                        {
                            temp[ctr++] = buffer;    
                        }
                        previous = board[j][i];
                        buffer = previous;
                        streak = 1;
                    }
                    else
                    {
                        buffer += board[j][i];
                        streak++;
                    }
                }
            }
            
            if (previous != -1)
            {
                temp[ctr++] = buffer;
            }
            for (int j = 0; j < 4; j++)
            {
                board[j][i] = 0;
            }        
            if (move == 1)
            {
                for (int j = 0; j < ctr; j++)
                {
                    board[j][i] = temp[j];
                }   
            }
            else
            {
                for (int j = 0; j < ctr; j++)
                {
                    board[3 - j][i] = temp[j];
                }
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", board[i][j]);
            if (j != 3)
                printf(" ");
        }
        printf("\n");
    }
}