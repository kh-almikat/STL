#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first>b.first) return 1;
    else if(a.first==b.first) return (a.second<b.second);
    else return 0;  
}

int main()
{
    int n;
    cin >> n ;
    vector<pair<int,int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

 

    for(auto u : v)
    {
            cout << u.first << " " << u.second << endl;
        
    }
}