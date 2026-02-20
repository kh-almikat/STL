#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    
    v.push_back( "Muhammad" );
    v.push_back( "Nova" );
    v.push_back( "Maslenia Mubarrat" );
    v.push_back( "CPS Academy" );
    v.push_back( "Rashedul Alam Anik" );
    v.push_back( "Farhan sadik Sakib" );
    v.push_back( "Gazi Mohaimin Iqbal" );

    sort ( v.begin(), v.end() );
    for ( auto u : v ) cout << u << endl;
}