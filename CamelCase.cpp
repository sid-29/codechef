#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>

using namespace std;


int main(){
    int i=0,c=0;
    char ch;
    string s;
    cin >> s;
    ch = s[0];
    while (ch != '\0')
        {
        if(ch >= 'A' && ch <= 'Z')
            {
            c++;
        }
        i++;
        ch = s[i];
    }
    cout<<c+1;

    return 0;
}
