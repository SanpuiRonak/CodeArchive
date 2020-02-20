#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,op=0;
    cin>>n>>k;
    int arr[n];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //equating stage
    for(int i=n/2,j;i<n-1;i++,j++)
    {
        if(k<=0)
        break;
        if(k>arr[i+1]-arr[i]*j)
        {
            k-=arr[i+1]-arr[i]*j;
            op++;
        }
        else
        {
            cout<<arr[n/2]+op;
            return 0;
        }
        
    }
    //reverse increment
    for(int i=n-1;k>0;i--)
    {
        k--;
        if(i==n/2)
        op++;
        if(i==0)
        i=n-i;
    }
    cout<<op;

}