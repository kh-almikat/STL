#include<bits/stdc++.h>
using namespace std;    
int main()
{
    map<int ,int> ve;

    vector<int> v={23,1,34,33,100,100,23};

    for(auto u : v) ve[u]=1;

    for(auto u : ve)
    {
        cout << u.first << " " << u.second << endl;
    }
}