#include <cstdio>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    string input;
    getline(cin, input);

    while (t--)
    {
        getline(cin, input);
        if (input == "P=NP")
        {
            printf("skipped\n");
        }
        else
        {
            stringstream ss(input);
            string d;
            getline(ss, d, '+');
            int a = stoi(d);
            getline(ss, d);
            int b = stoi(d);
            printf("%d\n", a + b);
        }
    }
}