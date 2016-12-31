#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
            long long int a,b,c,d,l,g,temp;
            cin>>a>>b;
            c=a;
            d=b;
            while(d!=0)
            {
                temp = d;
                d = c%d;
                c = temp;
                g = c;
            }
            l = (a*b)/g;
            cout<<g<<" "<<l<<endl;
    }
    return 0;
}
