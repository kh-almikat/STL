#include<bits/stdc++.h>
using namespace std;
int main()

// map output sort value
{
//    key/index  value
    map<string,int> m; //declaration of map

    m["abc"]=1;  //insertion in map
    m["def"]=2;
    m["ghi"]=3;

    for(auto u : m)
    {
        cout << u.first << " " << u.second << endl;

    }
}