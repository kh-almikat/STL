#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c='a';

    bool f1= isupper(c); // if upper -- 1 else -- 0
    cout << f1 << endl;

    bool f11= islower(c); // if lower -- 1 else -- 0
    cout << f11 << endl;

    bool f2= isspace(c); // if space -- 1 else -- 0
    cout << f2 << endl;


    // converting

    char c1='a';
    char c2= toupper(c1); // convert to upper case
    cout << c2 << endl;

    char c3='A';
    char c4= tolower(c3); // convert to lower case
    cout << c4 << endl;

}