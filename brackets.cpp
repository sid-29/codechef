#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,c=0,n=0;
    string s;
    char a[100];
    cin>>t;
    while(t--)
    {
        cin>>s;
        while(a[i]!='/0')
        {
            if(a[i]==')')
                c++;
            else if(a[i]=='(')
                n++;

        }
    }
    return 0;
}
