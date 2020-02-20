#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void cal(ll a,ll b,ll n,ll s)
{
        if(s<n)
    {
        if(b>=s)
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
    else if(s<=(a*n+b))
    {
        if(s%n<=b)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;  
    }
    else 
    {
        cout<<"no"<<endl;
    }
}
int main()
{

    ll a,b,n,s,q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
    cin>>a>>b>>n>>s;
    cal(a,b,n,s);
    }

}