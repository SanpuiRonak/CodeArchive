#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double d=b*b-4*a*c;
    double res1=(-b+sqrt(d))/(2*a);
    double res2=(-b-sqrt(d))/(2*a);
    if(res1>=res2)
    {
        cout<<res1<<endl<<res2;
    }
    else
    {
        cout<<res2<<endl<<res1;
    }
    
    return 0;
}