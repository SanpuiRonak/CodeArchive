#include<iostream>
#include<math.h>
using namespace std;


int main()
{    int t,n,answer;  
     long long int k,sum=0;
     cin>>t;
     while(t>0)
    { 
     cin>>n>>k;
     for(int i=1;i<=n,k>0;i++)
     { sum=sum+pow(i,k);
        if( i==n)
        {
        k--;
        i=1;
        continue;
        }
     }
     answer=sum%1000000007;
     cout<<answer+1;
     t--;
    }
    return 0;
}