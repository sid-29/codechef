#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    char ch;
    long int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int i=0,j=0,k=0;
        while (n--)
        {
            cin>>ch;
            if (ch == 'Y')
                i++;
            else if (ch == 'I')
                j++;
            else if (ch != 'Y' && ch!= 'I')
                k++;
        }
        if(i > j)
            cout<<"NOT INDIAN"<<endl;
        else if (j > i)
            cout<<"INDIAN"<<endl;
        else if (k > 0)
            cout<<"NOT SURE"<<endl;
    }
}

/*
3
5
NNNYY
6
NNINNI
4
NNNN
*/
