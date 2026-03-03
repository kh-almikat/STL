#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<pair<int, int>> s;

	s.insert ( { 1, 2 } );
	s.insert ( { 1, 2 } );
	s.insert ( { 4, 2 } );
	s.insert ( { 4, 3 } );
	s.insert ( { 2, 2 } );
	s.insert ( { 2, 1 } );

	/*

	Output :

	5
    1 2
    2 1
    2 2
    4 2
    4 3

    */

	cout << s.size() << endl;
	for ( auto u : s ) cout << u.first << " " << u.second << endl;
}