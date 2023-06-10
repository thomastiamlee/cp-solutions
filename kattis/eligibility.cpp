#include <cstdio>
#include <cstring>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char name[40];
        char study[20];
        char birth[20];
        int courses;
        scanf("%s %s %s %d", name, study, birth, &courses);

        char *token;
        token = strtok(study, "/");
        int studyY = atoi(token);
        
        token = strtok(birth, "/");
        int birthY = atoi(token);
        
        char verdict[100] = "";
        
        if (studyY >= 2010)
            strcpy(verdict, "eligible");
        else if (birthY >= 1991)
            strcpy(verdict, "eligible");
        else if (courses >= 41)
            strcpy(verdict, "ineligible");
        else
            strcpy(verdict, "coach petitions");

        printf("%s %s\n", name, verdict);
    }
}