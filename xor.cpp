#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,xc;
    string s;
    int c[2];
    c[0]=0;c[1]=0;
    cin>>n>>k>>x>>s;
    if(x==0)
    xc=1;
    else
    xc=0;
    c[0]=count(s.begin(),s.end(),'0');
    c[1]=count(s.begin(),s.end(),'1');
    cout<<n;
}