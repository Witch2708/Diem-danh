#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[100000]; int b[1000000];
    for(int i=0; i<n;i++)
    {
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( ( abs(a[i]-a[j])==abs(b[i]-b[j]) )||(a[i]==a[j])||(b[i]==b[j]) )
            {
                cout<< "yes";
                return 0;
            }
        }
    }
cout<<"no";
return 0;

}
