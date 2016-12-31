//  wrong answer
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
            int n,m,c=0;
            cin>>n>>m;
            int a[n][m];
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                {
                    cin>>a[i][j];
                }
            }
            for (int i=0;i<n;i++)
            {
                for (int k=i+1;k<n;k++)
                {
                    for (int j=0;j<m;j++)
                    {
                        if (a[i][j] == 1 && a[k][j] == 1)
                            c++;
                    }
                }
            }
            cout<<c<<endl;
    }
    return 0;
}

/*
2
4 3
1 1 1
1 0 0
1 1 0
0 0 0
2 2
1 0
0 1
*/
