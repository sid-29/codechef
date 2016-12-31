#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    long long int t,n,a,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n%10;
        for(int i=n;i>0;i/=10)
        {
            r=i%10;
        }
        r+=a;
        cout<<r<<endl;
    }
    return 0;
}
