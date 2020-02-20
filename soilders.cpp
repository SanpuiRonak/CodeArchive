#include <iostream>
#include <algorithm>
using namespace std;

int index(int s[],int l,int st);
int main()
{
    //input soilder info segment
    int k;cin>>k;
    int s[k],ss[k];
    for(int i=0;i<k;i++)
    {
        cin>>s[i];
    }
    ss[0]=s[0];
    for(int i=1;i<k;i++)
    {
        ss[i]=ss[i-1]+s[i];  //calculatinng cumiltive soilder strength
    }
    sort(s,s+k);  //sorted array
    //input bishnu info segment
    int n,st;cin>>n;
    int ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>st;
        ans[i]=index(s,k,st);  //calculating all indices
    }
    //printing answers
    for(int i=0;i<n;i++)
    cout<<ans[i]+1<<" "<<ss[ans[i]]<<"\n";
    return 0;
}

int index(int s[],int l,int st)
{
    
    int d[l];
        int mid =l/2;
        while(true)
        {
            if(s[mid]==st)
            {
                return mid;
            }
            else if(s[mid]<st)
            {
                if(s[mid+1]<st)
                {
                    mid++;continue;
                }
                else
                {
                    return mid;
                }
            }
            else if(s[mid]>st)
            {
                if(s[mid-1]>st)
                {
                    mid--;
                    continue;
                }
                else
                {
                    return --mid; 
                }
            }
        
    }
}
