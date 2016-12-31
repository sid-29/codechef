#include<iostream>
using namespace std;
int main()
{
    int a=0;
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int c[n];
        for (int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for (int i=0;i<n-2;i++)
        {
            if(c[i]==c[i+1] && c[i+1]==c[i+2])
            {
                a=1;
                break;
            }
            else
                a=0;
        }
            if(a==1)
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;

    }
    return 0;
}
