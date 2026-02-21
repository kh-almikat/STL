#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<string,bool> v;

    while (n--)
    {
        string s;
        cin>>s;

     
        if(v[s]==1) cout << "YES\n";
        else cout << "NO\n";

        v[s]=1;
    }
}