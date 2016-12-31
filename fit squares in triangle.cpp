#include<iostream>
using namespace std;
int main()
{
    long long int t,b,s;
    cin>>t;
    while (t--)
        {
        int c=0;
        cin>>b;
        for (int i=1;i<=b;i++)
        {
            if (8*i < (b*b))
            {
                c = i;
            }
            else
                break;
        }
        cout<<c<<endl;
    }
    return 0;
}
