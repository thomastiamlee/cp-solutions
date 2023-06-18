#include <cstdio>
#include <cstring>

int main()
{
    int t;
    char a[1001];
    char b[1001];
    scanf("%d", &t);
    scanf("%s", a);
    scanf("%s", b);

    t = t % 2;
    bool valid = true;

    for (int i = 0; i < strlen(a); i++)
    {
        if (t == 0 && a[i] != b[i])
        {
            valid = false;
            break;
        }
        else if (t == 1 && a[i] == b[i])
        {
            valid = false;
            break;
        }
    }

    printf(valid ? "Deletion succeeded\n" : "Deletion failed\n");
}