#include <cstdio>

int main()
{
    int n;
    char b;
    scanf("%d %c", &n, &b);
    int total = 0;
    n *= 4;
    while (n--)
    {
        char card[3];
        scanf("%s", card);

        char value = card[0];
        char suit = card[1];

        if (suit == b)
        {
            switch(value)
            {
                case 'A': total += 11; break;
                case 'K': total += 4; break;
                case 'Q': total += 3; break;
                case 'J': total += 20; break;
                case 'T': total += 10; break;
                case '9': total += 14; break;
                case '8': total += 0; break;
                case '7': total += 0; break;
            }
        }
        else
        {
            switch(value)
            {
                case 'A': total += 11; break;
                case 'K': total += 4; break;
                case 'Q': total += 3; break;
                case 'J': total += 2; break;
                case 'T': total += 10; break;
                case '9': total += 0; break;
                case '8': total += 0; break;
                case '7': total += 0; break;
            }
        }
    }
    
    printf("%d\n", total);
}