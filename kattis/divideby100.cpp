#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string n, m;

    cin >> n;
    cin >> m;

    int t = m.length() - 1;
    if (n.length() > t)
    {
        string left = n.substr(0, n.length() - t);
        string right = n.substr(n.length() - t, n.length());
        int c = right.length() - 1;
        while (right[c] == '0')
            c--;
        if (c == -1)
        {
            cout << left << "\n";
        }
        else
        {
            right.erase(c + 1, right.length());
            cout << left << "." << right << "\n";
        }
    }
    else
    {
        int e = t - n.length();
        cout << "0.";
        while (e--)
            cout << "0";
        int c = n.length() - 1;
        while (n[c] == '0')
            c--;
        n.erase(c + 1, n.length());
        cout << n << "\n";
    }
}