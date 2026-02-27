#include<bits/stdc++.h>
using namespace std;    
int main()
{
    vector<pair<int,int>> v;
	v.push_back ( { 1, 5 } );
	v.push_back ( { 2, 5 } );
	v.push_back ( { 7, 1 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 7, 1 } );
    
	int Sz = unique ( v.begin(), v.end() ) - v.begin();
	cout << Sz << endl;
	for ( int i = 0; i < Sz; i++ ) cout << v[i].first << " " << v[i].second << endl;
	cout << endl;

	/**
	4
	1 5
	2 5
	3 6
	7 1

	*/

}