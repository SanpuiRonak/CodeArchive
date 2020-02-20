#include <iostream>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    char c[n],t;
    while(i<n)
    {
        cin>>c[i];
        i++;
    }
    if(n%2==0)
    {
        t=c[0];
        c[0]=c[(n/2)-1];
        c[(n/2)-1]=t;
    }
    else
    {
        t=c[0];
        c[0]=c[n/2];
        c[n/2]=c[0];
    }
     while(i<n)
    {
        cout<<c[i];
        i++;
    }    

}