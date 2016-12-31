#include<iostream>
using namespace std;
int main()
{
    long int n,a,b,c,d;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            d=a;
        else
            d=b;
        c=a+b;
        cout<<d<<" "<<c<<endl;
    }
    return 0;
}
