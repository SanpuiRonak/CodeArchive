#include <bits/stdc++.h>
using namespace std;

bool e (int a[],int sum)
{
    int n=sizeof(a);
    if(a[n-1]%2!=0&&sum%2==0)
    return true;
    else
    return false;   
}

void fun()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    cin>>a[0];
    for(int i=1;i<n;i++)
    {
        
        cin>>a[i];
        sum+=a[i];
    }
    if(a[n-1]!=0)
    {
        if(sum%2==0)
        {
            int x;
            if(a[n-1]%2==0)
            x=n-2;
            else
            x=n-1;
            for(int i=0;i<=x;i++)
            {
                cout<<a[i]
            }
                
        }
    }
    
}