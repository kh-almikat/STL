#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Erasing front element in set

	 set<int> s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( s.begin() );
    cout << s.size() << endl; // 5
	for ( auto u : s ) cout << u << " "; // 2 3 4 5 6
	cout << endl;

	
    // Erasing back element in set

	s = { 1, 2, 3, 4, 5, 6 };

    s.erase ( --s.end() ); //s.rend()
    cout << s.size() << endl; // 5
	for ( auto u : s ) cout << u << " "; // 1 2 3 4 5
	cout << endl;

}