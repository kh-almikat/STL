#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "gDfdWs";
    sort ( s.begin(), s.end() ); // big letter will come first
    cout << s << endl; // DWdfgs

    
    sort ( s.rbegin(), s.rend() ); // small letter will come first
    cout << s << endl; // sgfDWd

}