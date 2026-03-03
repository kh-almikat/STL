#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<pair<int, int>, greater<pair<int,int>>> s;

	s.insert ( { 1, 2 } );
	s.insert ( { 1, 2 } );
	s.insert ( { 4, 2 } );
	s.insert ( { 4, 3 } );
	s.insert ( { 2, 2 } );
	s.insert ( { 2, 1 } );


	cout << s.size() << endl;
	for ( auto u : s ) cout << u.first << " " << u.second << endl;

	/**

	Output :
	5
    4 3
    4 2
    2 2
    2 1
    1 2

    */


	return 0;
}
