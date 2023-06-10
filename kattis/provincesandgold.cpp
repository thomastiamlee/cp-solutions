#include <cstdio>

int main()
{
    int g, s, c;
    scanf("%d %d %d", &g, &s, &c);

    int b = g * 3 + s * 2 + c;
    
    if (b >= 8)
        printf("Province or ");
    else if (b >= 5)
        printf("Duchy or ");
    else if (b >= 2)
        printf("Estate or ");

    if (b >= 6)
        printf("Gold\n");
    else if (b >= 3)
        printf("Silver\n");
    else
        printf("Copper\n");        
}