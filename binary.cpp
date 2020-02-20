#include <iostream>
using namespace std;

int binary(int a[],int n,int x);
int main()
{
    int b[5]={0,1,2,3,4},x;
    cin>>x;
    cout<<binary(b,sizeof(b)/sizeof(b[0]),x);
    return 0;
}

int binary(int a[],int n,int x)
{
    int max=n-1,min=0,i=-1;
    while(max!=min){
    if(x==a[(max+min)/2]){
    i=(max+min)/2;break;
    }
    else if(x>a[(max+min)/2])
    min=(max+min)/2;
    else if(x<a[(max+min)/2])
    max=(max+min)/2;
    }
    return i;
}