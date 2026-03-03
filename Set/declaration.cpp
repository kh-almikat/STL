#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> s = { 1, 1, 2, 1, 3 };

	// set print sort and unique value
	cout << s.size() << endl;

	for ( auto u : s ) cout << u << " "; /// 1 2 3
	cout << endl;
}