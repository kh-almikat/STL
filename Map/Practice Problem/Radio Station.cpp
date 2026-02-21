#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    map<string,string> IPname;

    for(int i=0; i<n; i++)
    {
        string nam,ip;
        cin >> nam >> ip;
        
        IPname[ip] = nam;
        
    }

    while( m--)
    {
        string s1,s2;
        cin >> s1 >> s2;

        s2.pop_back();
        cout << s1 << " " << s2 << "; #" << IPname[s2] << endl;
    }
}