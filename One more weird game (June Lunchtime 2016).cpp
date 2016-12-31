
// method 1
#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        int c=0;
        long int n,m,score=0;
        cin>>n>>m;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(i == j)
                {
                    c = 1;
                    score += c;
                }
                else
                {
                    c=2;
                    score += c;
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}


/*
#include<iostream>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
        int c=0;
        long int n,m,score=0;
        cin>>n>>m;
        int colored[n][m];
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if(colored[i][j])
                {
                    c = 1;
                    score += c;
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}
*/
