//    wrong logic  ENTEXAM
#include<iostream>
using namespace std;
int main()
{
    int t,e;
    cin>>t;
    while(t--)
    {
        long long int n,k,m;
        cin>>n>>k>>e>>m;
        long long int b[n],c,ma,x,a;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<e;j++)
            {
                cin>>a;
                b[i] += a;
            }
        }
        for (int i=1;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if ( b[i] < b[j] )
                {
                    ma = b[i];
                    b[i] = b[j];
                    b[j] = ma;
                }
            }
        }
        for(int j=0;j<e-1;j++)
        {
            cin>>a;
            c += a;
        }
        x = b[1] + 1 - c;
        cout<<x<<endl;
    }
    return 0;
}
