    #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
        int t;
        long long int n;
        cin>>t;
        while(t--)
        {
            long long int h=1;
            cin>>n;
            while ((h*(h+1))/2 <= n)
                h++;
            cout<<h-1<<endl;
        }
        return 0;
    }
