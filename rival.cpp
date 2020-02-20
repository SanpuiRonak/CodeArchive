#include <bits/stdc++.h>
using namespace std;
int dist(int n,int x,int a ,int b);

int main()
{
    int q,n,x,a,b;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>n>>x>>a>>b;
        cout<<dist(n,x,a,b)<<endl;
    }
}

int dist(int n,int x,int a ,int b)
{
    return min(n-1,x+abs(b-a));
}