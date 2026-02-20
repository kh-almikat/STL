#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaadddsss";
    sort (s.begin(),s.end());

    int n = unique( s.begin(), s.end() ) - s.begin();

    for ( int i = 0; i < n; i++ ) 
    cout << s[i]; // ads

    cout << endl;
}