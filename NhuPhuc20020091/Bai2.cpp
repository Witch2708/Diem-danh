#include <iostream>
#include<string.h>
using namespace std;

void Eratosthenes(int n)
{
    bool nguyento[n + 1];
    memset(nguyento, true, sizeof(nguyento));

    for (int p = 2; p * p <= n; p++)
    {

        if (nguyento[p] == true)
        {
           for (int i = p * p; i <= n; i += p)
                nguyento[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
    {
        if (nguyento[p])
           {
               cout << p << " ";
           }

    }
}
int main()
{
    int n ;
    cin>> n;
    Eratosthenes(n);
    return 0;
}
