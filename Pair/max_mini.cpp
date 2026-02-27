#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1 = { 2, 3 };
	pair<int, int> p2 = { 1, 6 };

    // Getting minimum of 2 pairs
	pair<int, int> p = min ( p1, p2 );
	cout << p.first << " " << p.second << endl; // 1 6

    // always compare first element of pair

	// Getting maximum of 2 pairs
	p = max ( p1, p2 );
	cout << p.first << " " << p.second << endl; //2 3
}