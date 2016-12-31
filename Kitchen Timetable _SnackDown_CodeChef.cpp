#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int c=0;
        cin>>n;
        long long int a[n],b[n];
        for (int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for (int k=0;k<n;k++)
        {
            cin>>b[k];
        }
        for (int j=0;j<n;j++)
            {

                if (a[j] <= b[j])
                    c++;
            }
        cout<<c<<endl;
    }
    return 0;
}
