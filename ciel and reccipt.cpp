
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,count;
    long long int p,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        count=0;
        cin>>p;
        for(int j=11;j>=0;j--)
        {
            n=pow(2,(double)j);
            if (p-n>=0)
            {
                p=p-n;
                j++;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;

    for(int i=0;i<T;i++)
    {
            int N;
            cin>>N;

            int Ans =0;

            for(int k=11;k>=0;k--)
            {
                    int p = (int)pow(2.0,(double)k);
                 //   cout<<"p before N-p "<<p<<endl;
                    if(N - p >= 0)
                    {
                         N = N - p;
                       //  cout<<"N="<<N<<endl;
                       //  cout<<"k=before:="<<k<<endl;
                         k++;
                       //  cout<<"k=after:="<<k<<endl;
                         Ans = Ans +1;
                    }
            }
            cout<<Ans<<endl;
    }
    return 0;
}
*/
