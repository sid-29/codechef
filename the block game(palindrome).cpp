#include<iostream>
using namespace std;
int main()
{
    int t;
    long int n;
    cin>>t;
    while (t--)
    {
        int res=0,rem=0;
        cin>>n;
        for (int i=n;i>0;i/=10)
        {
            rem = i%10;
            res = (res*10) + rem;
        }
        if(res == n)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
    }
    return 0;
}
