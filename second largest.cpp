/*
#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if((a>b && a<c) || (a>c && a<b))
            cout<<a<<endl;
        else if((b>c && b<a) || (b>a && b<c))
            cout<<b<<endl;
        else if((c>a && c<b) || (c>b && c<a))
            cout<<c<<endl;
    }
    return 0;
}
*/
//   ***  2nd method ***

#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int g[3],temp=0;
        for(int i=0;i<3;i++)
        {
            cin>>g[i];
        }
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if (g[i]<g[j])
                {
                    temp = g[i];
                    g[i] = g[j];
                    g[j] = temp;
                }
            }
        }
        cout<<g[1]<<endl;
    }
    return 0;
}
