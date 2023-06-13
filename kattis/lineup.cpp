#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector <string> list, sortedList;

    while (n--)
    {
        string i;
        cin >> i;
        list.push_back(i);
        sortedList.push_back(i);
    }

    sort(sortedList.begin(), sortedList.end(), [](string a, string b) {
        return a < b;
    });

    if (list == sortedList)
    {
        printf("INCREASING\n");
        return 0;
    }

    sort(sortedList.begin(), sortedList.end(), [](string a, string b) {
        return a > b;
    });

    if (list == sortedList)
    {
        printf("DECREASING\n");
        return 0;
    }

    printf("NEITHER\n");
}