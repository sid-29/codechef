/*
//   CORRECT ANSWER
#include<iostream>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int x;
    long int s1,s2=0,t1,t2=0,t3=0,max=0;
    for (int i=0;i<n;i++)
    {
        cin>>s1>>t1;
        s2 = s1 + s2;
        t2 = t1 + t2;
        t3  = s2 - t2;
        if (t3 < 0)
        {
            t3 = t3 *(-1);
            if (t3>max)
            {
                max = t3;
                x=2;
            }
        }
        else
        {
            if(t3 > max)
            {
                max = t3;
                x=1;
            }
        }
    }
     cout<<x<<" "<<max<<endl;
    return 0;
}
*/
/*
5
140 82
89 134
90 110
112 106
88 90
*/

//                  my wrong answer
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long int n;
    int loc =0;
    cin>>n;
    int x;
    long int s1[n],s2[n],t1[n],t2[n],t3[n],max=0;
    for (int i=0;i<n;i++)
    {
        cin>>s1[i]>>t1[i];
    }
    for (int i=0;i<n;i++)
    {for(int j=1;j<n;j++)
    {
        s2[0] = t2[0] =0;
        s2[i] = s1[i] + s2[j-1];
        cout<<"s1["<<i<<"] = "<<s1[i]<<endl;
        t2[i] = t1[i] + t2[j-1];
        cout<<"t1["<<i<<"] = "<<t1[i]<<endl;
        t3[i] = (s2[i] - t2[i]);
    }}
    for (int i=0;i<n;i++)
    {
        if (t3[i] < 0)
            {
                t3[i] = t3[i]*(-1);
                if (t3[i] > max)
                {
                    max = t3[i];
                    x = 2;
                }
            }
        else
        {
            if (t3[i] > max)
            {
                max = t3[i];
                x = 1;
            }
        }
    }
    cout<<x<<" "<<max<<endl;
    return 0;

}
*/
/*
5
140 82
89 134
90 110
112 106
88 90
*/
