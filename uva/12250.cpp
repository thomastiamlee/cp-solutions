#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{   

    string current;
    
    int t = 1;
    
    cin >> current;

    while (current != "#")
    {
        string l;
        if (current == "HELLO")
            l = "ENGLISH";
        else if (current == "HOLA")
            l = "SPANISH";
        else if (current == "HALLO")
            l = "GERMAN";
        else if (current == "BONJOUR")
            l = "FRENCH";
        else if (current == "CIAO")
            l = "ITALIAN";
        else if (current == "ZDRAVSTVUJTE")
            l = "RUSSIAN";
        else 
            l = "UNKNOWN";

        printf("Case %d: %s\n", t++, l.c_str());
        cin >> current;
    }
}