#include<iostream>
using namespace std;
int main()
{
    long long int n,num,rem;
    cin>>n;
    for (int i=0;i<n;i++)
    {
       long long int count=0;
        cin>>num;
        for (int j=num;j>0;j/=10)
        {
            rem=j%10;
            if(rem == 4)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
