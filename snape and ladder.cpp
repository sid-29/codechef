#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n,b,l;
    float rmin,rmax;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>b>>l;
        rmin = sqrt(pow(l,2)-pow(b,2));
        rmax = sqrt(pow(l,2)+pow(b,2));
        std::cout << std::fixed << std::setprecision(4) << rmin << " ";
        std::cout << std::fixed << std::setprecision(4) << rmax << std::endl;
    }
}
