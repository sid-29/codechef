#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int n,fact=1;
        cin>>n;
        for(int i=n;i>0;i--)
        {
            fact *= i;
        }
        cout<<fact<<endl;
    }
    return 0;
}
