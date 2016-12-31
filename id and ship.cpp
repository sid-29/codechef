#include<iostream>
using namespace std;
int main()
{
    int t;
    char n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n == 'B' || n == 'b')
            cout<<"BattleShip"<<endl;
        else if (n == 'C' || n == 'c')
            cout<<"Cruiser"<<endl;
        else if (n == 'D' || n == 'd')
            cout<<"Destroyer"<<endl;
        else if ( n == 'F' || n == 'f')
            cout<<"Frigate"<<endl;
    }
    return 0;
}
