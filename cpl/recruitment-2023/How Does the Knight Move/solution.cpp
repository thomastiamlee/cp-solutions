#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string position;
        int k;

        cin >> position;
        cin >> k;

        int row = position[0] - 'A';
        int col = position[1] - '0' - 1;
        int rowJumps[8] = {1, 1, -1, -1, 2, 2, -2, -2};
        int colJumps[8] = {2, -2, 2, -2, 1, -1, 1, -1};

        int ctr = 0;
        
        bool reachable[8][8] = {0};
        reachable[row][col] = 1;
        int reachableCount = 1;
        
        bool flip = false;

        while (ctr < k)
        {
            if (reachableCount == 32)
            {
                if ((k - ctr) % 2 == 1)
                {
                    flip = true;
                }
                break;
            }

            bool nextReachable[8][8] = {0};
            int nextReachableCount = 0;

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (reachable[i][j])
                    {
                        for (int k = 0; k < 8; k++)
                        {
                            int nextRow = i + rowJumps[k];
                            int nextCol = j + colJumps[k];
                            if (nextRow >= 0 && nextCol >= 0 && nextRow <= 7 && nextCol <= 7 && !nextReachable[nextRow][nextCol])
                            {
                                nextReachable[nextRow][nextCol] = 1;
                                nextReachableCount += 1;
                            }
                        }
                    }
                }
            }

            memcpy (reachable, nextReachable, 8*8*sizeof(bool));
            reachableCount = nextReachableCount;

            ctr++;
        }

        int target = true;
        if (flip) target = false;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (reachable[i][j] == target)
                {
                    cout << (char)(i + 'A') << (j + 1) << '\n'; 
                }
            }
        }

        if (i < t - 1)
        {
            cout << '\n';
        }
    }
}