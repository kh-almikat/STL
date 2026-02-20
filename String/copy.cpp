#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tmp = "Gagha Alam Gadha";
	string s = "Shahriar ";

	copy ( tmp.begin()+6, tmp.begin()+10, back_inserter ( s ) ); 
    
	cout << s << endl; /// Shahriar Alam
}