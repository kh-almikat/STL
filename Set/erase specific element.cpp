#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<int> s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( 2 );
    cout << s.size() << endl; // 5
	for ( auto u : s ) cout << u << " "; // 1 3 4 5 6
	cout << endl;

	s.erase ( 10 );
    cout << s.size() << endl; // 5
	for ( auto u : s ) cout << u << " "; // 1 3 4 5 6
	cout << endl;

}