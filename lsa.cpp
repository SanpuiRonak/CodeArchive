#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],s[n];
    cin>>a[0];
    s[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    

}