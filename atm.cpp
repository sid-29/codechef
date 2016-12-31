#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
main()
{
    int x;
    double y,z;
    cin>>x>>y;
    if(x % 5 == 0 && x<(y-0.50))
    {
        z=y-(x+0.50);
        std::cout << std::fixed << std::setprecision(2)<< z << std::endl;

    }
    else
        {
            z=y;
        std::cout << std::fixed << std::setprecision(2)<< z << std::endl;
        }

return 0;
}
