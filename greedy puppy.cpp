#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long int n,k;
        cin>>n>>k;
        int max=0;
        for (int i=2;i<=k;i++)
        {
            if (n%i > max)
                max = n%i;
        }
        cout<<max<<endl;
    }
    return 0;
}
