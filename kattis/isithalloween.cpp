#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string i;
    getline(cin, i);
    if (i == "OCT 31" || i == "DEC 25")
        printf("yup\n");
    else
        printf("nope\n");
}