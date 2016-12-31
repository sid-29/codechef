#include<iostream>
using namespace std;
int main()
{
    int t,a[10];
    long long int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int j,count=0;
        for(int i=n;i>0;i/=10)
        {
            j=0;
            a[j] = i%10;
            j++;
        }
        for (int k=0;k<j;k+=2)
        {
            if (a[k]!=a[k+1])
                count++;
        }
        if (count == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

}
