#include <bits/stdc++.h>
using namespace std;

int main() 
{
    set<int> s = { 1, 1, 2, 1, 3 };

    // Front element in set
    cout << *s.begin() << endl; // 1

    // Last element in set
    cout << *(--s.end()) << endl; // 3
    cout << *s.rbegin() << endl; // 3

}