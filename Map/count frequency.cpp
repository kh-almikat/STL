#include<bits/stdc++.h>
using namespace std;    
int main ()
{
    vector<long long> v = {1,2,44,1,22,44,44,6456546545435454675564};

    map<long long,int> cnt;

    for(int i=0;i<v.size();i++)
    {
        cnt[v[i]]++;
    }
    /*
      for(auto u : cnt)
    {
       U[i]++;
    }  
    */  
   for(auto u : cnt)
   {
       cout << u.first << " " << u.second << endl;
   }
}