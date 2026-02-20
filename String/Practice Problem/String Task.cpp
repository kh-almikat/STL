#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    cin >> s;

    for(auto u :s)
    {
        char c= tolower(u);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
        {
            continue;
        }
        else
        {
            ans += '.';
            ans += c;
        }
    }
    cout << ans;
}