#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

    while (input != "END")
    {
        int i = 0;
        string prev, next;
        next = input;
        prev = "x";

        while (next != prev)
        {
            prev = next;
            next = to_string(prev.length());
            i++;
        }

        printf("%d\n", i);
        
        cin >> input;
    }
}