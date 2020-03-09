#include <bits/stdc++.h> 


using namespace std;
int n;
float f(int u,int v,int s);

int main(){
	int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int u[n],v[n],s=0;
        for (int i=0;i<n;i++)
        {
            cin>>u[i];
            cin>>v[i];
        }
        for(int l=0,j=-1;l<n;l++,j*=-1)
        {
            int k;
            cin>>k;
            s+=j*k;
        }
        float a[n],max=0;
        for(int l=0;l<n;l++)
        {
            a[i]=f(u[i],v[i],s);
            if(a[i]>max)
            max=a[i];

        }
        cout<<max<<endl;
    }
}


float f(int u,int v,int s)
{
    if(n%2==0)
    return abs(s+u-v)%1000000007;
    else
    return abs(s+u+v)%1000000007;
    
}