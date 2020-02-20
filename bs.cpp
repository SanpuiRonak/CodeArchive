#include <iostream>
#include <algorithm>
using namespace std;

int search(int arr[],int n,int x);
int main()
{

}

int search(int arr[],int n,int x)
{
    int d[n];d[n-1]=a[n-1]+1;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]-a[i-1]==1)
        d[i]=d[i+1];
        else
        d[i]=a[i]+1;
    }
}