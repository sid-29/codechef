#include<iostream>
using  namespace std;
int main()
{
    long long int n,c,b;
    cin>>n;
    for (int j=0;j<n;j++)
    {
        int c = 0;
        cin>>b;
        for(int i=5; b/i>=1; i *= 5)
        {
            c += b/i;
        }
        cout<<c<<endl;
    }
    return 0;
}
