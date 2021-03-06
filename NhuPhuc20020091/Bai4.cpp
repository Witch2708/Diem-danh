#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int a[1000000];
    cin>>n>>x;
    for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
//   int count=0;
 //   for(int i=0; i<n;i++)
//   {
//      if(x==a[i])
//        count++;
//  }
// if(count ==0){ cout<<"NO";}
// if(count !=0) {cout<<"YES";}
   int left =0,right = n-1;

  while(left<=right){
    int mid = (left + right)/2;
     if(a[mid]==x)
       {
           cout << "YES";
           return 0;
      }
     else  if(a[mid]<x)
        {
           left=mid +1;
       }
     else
        {
            right=mid-1;
        }
    }
    cout<< "NO";
    return 0;
}
