#include <bits/stdc++.h>
using namespace std;

    long n,k,rem=0;bool flag=true;
    void net(int a);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cin>>k;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[i];
            if(flag)
            net(a[j]);
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

}


void net(int a)
{
    rem= a-k+rem;
    flag=(rem>0);
    
}