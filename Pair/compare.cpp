#include<bits/stdc++.h>
using namespace std;    
int main()
{
    pair<int , int>p1,p2;

    p1={1,2};
    p2={3,4};

    if(p1<p2) cout<<"p1 is smaller than p2"<<endl;
    else if(p1>p2) cout<<"p1 is greater than p2"<<endl;
    else cout<<"p1 and p2 are equal"<<endl;
    // p1 is smaller than p2 because 1<3
    // always comapre first element 
    // if p1.first and p2.first are equal then we will compare p1.second and p2.second
    
}