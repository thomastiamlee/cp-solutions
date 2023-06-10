#include <cstdio>
#include <string>
#include <iostream>
#include <deque>
#include <bits/stdc++.h>

using namespace std;

class Record
{
    public:
        string name;
        int rank;
};

int convertToken(string token)
{
    if (token == "upper")
        return 0;
    if (token == "middle")
        return 1;
    if (token == "lower")
        return 2;
    return -1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        string dummy;
        getline(cin, dummy);

        Record records[n];

        for (int i = 0; i < n; i++)
        {
            string line;
            getline(cin, records[i].name, ':');

            string c;
            getline(cin, c, ' ');
            getline(cin, c, ' ');
            
            stringstream cc(c);
            string token;
            deque <int> components;
            int ctr = 9;
            while (!cc.eof())
            {
                getline(cc, token, '-');
                components.push_front(convertToken(token));
            }
            while (components.size() < 10)
            {
                components.push_back(1);
            }
            records[i].rank = 0;
            while (components.size() > 0)
            {
                int value = components.front();
                components.pop_front();
                records[i].rank += value;
                records[i].rank *= 3;
            }
            getline(cin, c);
        }

        sort(records, records + n, [](const Record a, const Record b) {
            if (a.rank == b.rank)
                return a.name.compare(b.name) < 0;
            return a.rank < b.rank;
        });

        for (int i = 0; i < n; i++)
        {
            cout << records[i].name << "\n";
        }
        for (int i = 0; i < 30; i++)
        {
            printf("=");
        }
        printf("\n");
    }
}