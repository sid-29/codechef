#include<iostream>
using namespace std;
int main()
{
    int n,m,minm;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>m;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
            minm =a[j];
            for(int k=j;k>0;k--)
            {
                if(a[j] < minm)
                    minm = a[j];
            }
        }
        for(int j=0;j<m;j++)
        {
            a[j] /= minm;
        }
        for(int j=0;j<m;j++)
        {
            cout<<a[j];
        }
        cout<<endl;
    }
}
