/*
//wrong  answer
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,mi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int b[100000],c[100000];
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for (int i=0;i+1<n;i++)
        {
            c[i] = b[i] + b[i+1];
        }
        mi = c[0];
        for (int i=1;i<n-1;i++)
        {
            if( c[i] < mi)
            {
                mi = c[i];
            }
        }
        cout<<mi<<endl;
    }
    return 0;
}
*/

// time limit exceeded
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,mi;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int b[100000]={0},c;
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        mi = b[0] + b[1];
        for (int i=0;i+1<n;i++)
        {
            c = b[i] + b[i+1];
            if( c < mi)
            	mi = c;
        }
        cout<<mi<<endl;
    }
    return 0;
}
