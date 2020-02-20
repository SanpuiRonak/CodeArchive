#include <iostream>
using namespace std;
int main()
{
    int a,b,c,m=0,*p;
    cin>>a>>b>>c;
    if(a+b>c||a+c>b||c+b>a)
    cout<<m;
    else{
    *p=min(a,b,c);
    *p++;
     m++;
    }
    return 0;
}