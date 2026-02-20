#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ShaKAKAhriar";

	s.erase ( s.begin()+2 ); 
	cout << s << endl; //ShKAKAhriar



	s.erase ( s.begin()+3, s.begin()+7 ); 
	cout << s << endl; //ShKriar


	s.erase ( s.end()-1); 
	cout << s << endl; //ShKria
}