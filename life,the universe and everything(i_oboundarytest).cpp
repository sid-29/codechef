#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n!=42)
    {
        v.push_back(n);
        cin>>n;
    }
    cout<<endl;
    vector <int> :: iterator itr;
    for (itr=v.begin();itr!=v.end();itr++)
    {
        cout<< *itr <<endl;
    }
return 0;
}
