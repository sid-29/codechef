#include<iostream>
using namespace std;
int main()
{
    int t,c;
    long long int n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        char color[n];
        for(int j=0;j<n;j++)
        {
            cin>>color[j];
        }
        c=0;
        for(int j=0;j<n;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if(color[j]==color[k])
                    {
                    c++;
                    }

            }
        }
        if(c==0)
            cout<<n-1<<endl;
        else if(c==n)
            cout<<"0"<<endl;
        else
            cout<<n-c-1<<endl;
    }
    return 0;
}
/*
//  SYMBOL'S  solution
#include <iostream>

using namespace std;

int main()
{
    long long int i,j,t,k,l,m,n,o,p;
    cin>>t;

    while(t--)
    {
        cin>>l;
        long long int r=0,b=0,g=0;
        char str[l];

        for(i=0;i<l;i++)
        {
            cin>>str[i];
        }

        for(i=0;i<l;i++)
        {
            if(str[i]=='R')
            {
                r++;
            }
            else if(str[i]=='B')
            {

                b++;
            }
            else
            {
                g++;

            }

        }
         m=0;

        if(r==b && r==g)
        {
            cout<<l-r<<endl;

        }
        else
        {
            if(r>=b && r>=g)
            {
                m=r;
            }

            else if(b>=r && b>=g)
            {
                m=b;
            }

            else
            {
                m=g;
            }

        cout<<l-m<<endl;


    }
}
     return 0;

}
*/
