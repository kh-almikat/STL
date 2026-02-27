#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p; //declaration of pair

    p.first=10;
    p.second="Hello";

    cout<<p.first<<" "<<p.second<<endl;

    

    
    pair< string , vector<int> > p1; //pair of string and vector

    p1.first="Numbers";
    p1.second={1,2,3,4,5};

    cout<<p1.first<<" : ";
    for(auto u : p1.second) cout<<u<<" ";
    cout<<endl;

}