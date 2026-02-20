#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; 

    for(int i=0; i<n; i++)
    { 
        char c;
        cin >> c;
        string s;
        getline( cin, s ); 

        s=c+s;

        cout << "Case " << i+1 << ": " << s << "  "<<endl;
    }
}