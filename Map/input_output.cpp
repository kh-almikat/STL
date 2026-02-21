#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> v;

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string s;
        int x;
        cin >> s >> x;

        v[s]=x;
    }

    for(auto u : v)
    {
        cout << u.first << " " << u.second << endl;
    }
}