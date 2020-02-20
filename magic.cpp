#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isMagic(ll n,ll x);

int main()
{
    ll q,n,x;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        cin>>n>>x;
        if(isMagic(n,x))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;    
    }
}

bool isMagic(ll n,ll x)
{
   if(n==x)
   return true;
   else if(n==1)
   return false;
   else
   n=
   
}