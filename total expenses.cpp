#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while (t--)
    {
            int q,p;
            double e;
            cin>>q>>p;
            if (q > 1000)
            {
                e = q*p*0.9;
            }
            else
                e = q*p;
            std::cout<<std::fixed<<std::setprecision(6)<<e<<std::endl;
    }
    return 0;
}
