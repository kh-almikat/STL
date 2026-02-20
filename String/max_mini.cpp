#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "asddsa";

    /// Getting maximum element of string
    cout << *max_element( s.begin(), s.end() ) << endl; /// s
    
    /// Getting minimum element of string
    cout << *min_element( s.begin(), s.end() ) << endl; /// a
}