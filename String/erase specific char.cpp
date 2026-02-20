#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaassdddaaasdd";

	s.erase ( remove ( s.begin(), s.end(), 'a' ), s.end() ); /// removes all 'a' from s
    
	cout << s << endl;
}