#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     bool a[n];
     for(int i=2;i<n;i++)
     {
         if(!a[i])
         {
             for(int j=i;j<n;j+=i)
             {
                 a[j]=true;
             }
         }
     }
     for(int i=2;i<=n;i++)
     {
         if(!a[i])
         cout<<i;
     }
 }