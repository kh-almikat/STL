#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<string, greater<string>> s;

	s.insert ( "momo" );
	s.insert ( "momo" );
	s.insert ( "prety" );
	s.insert ( "prety" );
	s.insert ( "shahriar" );
	s.insert ( "nobel" );
	s.insert ( "sharif" );
	s.insert ( "proma" );

	cout << s.size() << endl;
	for ( auto u : s ) cout << u << endl;

	/**

	Output :

	6
    sharif
    shahriar
    proma
    prety
    nobel
    momo

    */
}