#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int n,num;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            long int rem,result=0;
            for(int j=num;j>0;j/=10)
            {
                    rem=j%10;
                    cout<<"rem:"<<rem<<endl;
                    result=(result*10)+rem;
            }
        cout<<result<<endl;
        }
        return 0;
}
