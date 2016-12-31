//  time limited exceed
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int t,temp;
    cin>>t;
    long int a[t];
    for (int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<t;i++)
    {
        for (int j=i+1;j<t;j++)
        {
            if ( a[i] > a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
