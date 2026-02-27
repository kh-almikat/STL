#include<bits/stdc++.h>
using namespace std;    
int main()
{
    pair<int,int> p;

	p = make_pair ( 2, 3 );
	cout << p.first << " " << p.second << endl; /// 2 3




    pair<int,int> p1;

    p1 = make_pair(1,2); /// initialization
    cout << p1.first << " " << p1.second << endl; /// 1 2 

    


    pair<string,vector<int>> p2;

    p2 = { "Numbers",{1,2,3,4,5} }; /// initialization

    cout << p2.first << " : ";
    for(auto u : p2.second) cout<<u<<" ";
    cout<<endl;

}