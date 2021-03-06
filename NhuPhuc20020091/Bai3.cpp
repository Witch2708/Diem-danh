#include<iostream>
using namespace std;
int main()
{
    int n,a,m,q=1;
    cin>> a>>n>>m;
    for(int i=1;i<=n;i++)
        {
             q=(q*(a%m))%m;
        }
    cout<<q;
}
