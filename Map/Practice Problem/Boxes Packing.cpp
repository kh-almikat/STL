#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int ,int> v;

    int mx = 1e6+5;
    int a[mx];

    for(int i=0 ;i<n ; i++)
    {
        cin>>a[i];
        v[a[i]]++;
    }
    int ans = 0;
    for(int i=0 ;i<n ; i++)
    {
    
            ans = max(ans , v[a[i]]);
    }
    cout<<ans<<endl;
}