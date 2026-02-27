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

	sort ( v.begin(), v.end() ); // sorts based on first element 
	for ( auto u : v ) cout << u.first << " " << u.second << endl;
	cout << endl;

	/**
	1 5
	2 5
	3 6
	3 6
	7 1
	7 1

	*/
}