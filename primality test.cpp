#include<iostream>
using namespace std;
int main()
{
    int t;
    long int n;
    cin>>t;
    while (t--)
    {
        int c =0;
        cin>>n;
        for (int i=2;i<n;i++)
        {
            if(n%i == 0)
                c++;
        }
        if(c>0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
