#include<iostream>
using namespace std;
int main()
{
    long int n,a,b,rem;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            rem=a%b;
            cout<<rem<<endl;
        }
        return 0;
}
