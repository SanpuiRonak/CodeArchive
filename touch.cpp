#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;

int main()
{
    ll p;
    cin>>p;
    ll piles[p];
    ll cpiles[p];
    
    cin>>piles[0];
    cpiles[0]=piles[0];
    
    for(ll i =1;i<p;i++)
    {
        cin>>piles[i];
        cpiles[i]=piles[i-1]+piles[i];
    }

    ll t;
    cin>>t;
    ll x;

    for (ll i = 0; i < t; i++)
    {
        cin>>x;
        ll low=0,high=p-1;
        ll pivot=(low+high)/2;
        while(low<=high)
        {
            if(cpiles[pivot]>x)
            {
                high=pivot;
                pivot=(high+low)/2;
            }
            else if(cpiles[pivot]<x)
            {
                cpiles[pivot]<x;
                low=pivot;
                pivot=low+high/2;
            }
            else
            {
                break;
            }
        }
        cout<<pivot+1<<endl;
    }
    
    
}

