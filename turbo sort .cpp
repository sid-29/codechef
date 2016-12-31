#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
	}
    sort(arr,arr+t);
    for(int i=0;i<t;i++)
	{
        cout<<arr[i]<<endl;
	}
    return 0;
}
