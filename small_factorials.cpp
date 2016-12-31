#include<iostream>
using namespace std;
long long int fact(long long int a)
{
	if(a==0)
		return 1;
	return a*fact(a-1);
}
int main()
{
    int n;
    long long int num,f;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        f=fact(num);
        cout<<f<<endl;
    }
    return 0;
}
