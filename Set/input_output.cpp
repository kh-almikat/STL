#include<bits/stdc++.h>
using namespace std;    
int main()
{
    set<int> s;
    // inserting in set
	s.insert ( 1 );  
	s.insert ( 1 ); //like pop_back
	s.insert ( 1 );
	s.insert ( 2 );
	s.insert ( 1 );
	s.insert ( 3 );

	cout << s.size() << endl; // 3
	for ( auto u : s ) cout << u << " "; //1 2 3
	cout << endl;

	// checking is specific element is in a set
	cout << s.count ( 2 ) << endl; // 1
	cout << s.count ( 4 ) << endl; // 0

}