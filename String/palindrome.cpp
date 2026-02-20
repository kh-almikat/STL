#include<bits/stdc++.h>
using namespace std;
int main()

{
    string s = "asddsa";
    string tmp = s;
    reverse( tmp.begin(), tmp.end() ); // reverse the string`

    if ( tmp == s ) 
    cout << "Yes Palindrome" << endl;

    else 
    cout << "Not Palindrome" << endl;
}