#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
    long long int t,n;
    int x=0,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            for (c=2;c<=i-1;c++)
            {
                if(c%i==0)
                    break;
            }
            if(c==i)
                a[i]=c;
                cout<<"a[i]"<<a[i]<<endl;
        }
        for (int i=1;i<2*n;i++)
            {
                for (int j=1;j<101;j++)
                {
                    if (pow(a[i],j)==n)
                        {
                            cout<<"pow"<<pow(a[i],j)<<endl;
                            x=1;
                        }
                    else
                        x=0;
                }
            }
            if (x==1)
                cout<<"Chef"<<endl;
            if (x==0)
                cout<<"Misha"<<endl;
    }
    return 0;
}
