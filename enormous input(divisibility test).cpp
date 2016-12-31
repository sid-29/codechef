#include<iostream>
using namespace std;
int main()
{
    long n,m,count=0,a;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%m==0)
            count++;
    }
    cout<<count;
}
