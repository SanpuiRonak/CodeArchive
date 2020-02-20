#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;int n;
    cin>>n>>s;
    cout<<min(s.find_last_of('0'),s.find_last_of('1'))+1;
}