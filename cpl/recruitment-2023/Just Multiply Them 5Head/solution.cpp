#include <cstdio>
#include <iostream>

using namespace std;

unsigned long long int raise(unsigned long long int k, unsigned long long int p)
{
    if (p == 1) return k;
    unsigned long long int val = raise(k, p / 2);
    if (p % 2 == 0) return (val % 1000000007) * (val % 1000000007) % 1000000007;
    return (val % 1000000007) * (val % 1000000007) % 1000000007 * (k % 1000000007) % 1000000007;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int grandTotal = 1;
        
        int ctr = 2;
        while (ctr--)
        {
            int f;
            cin >> f;
            while (f--)
            {
                unsigned long long int k, p;
                cin >> k >> p;
                grandTotal = grandTotal * raise(k, p) % 1000000007;         
            }
        }
        cout << grandTotal << '\n';
    }

}