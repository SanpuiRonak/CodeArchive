#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n,k;
        cin>>n;
        cin>>k;
        long long int a[n];
        for(long j=0;j<n;j++)
        {
            cin>>a[j];
        }
        long long int* p[k];
        for(long l=0;l+n-k+1<n;l++)
        {
            p[l]=max_element(a+l,a+(l+n-k)+1);

        }
        for(long j=0;j<k;j++)
        {
            cout<<*p[j]<<endl;
        }
    }
    return 0;
}