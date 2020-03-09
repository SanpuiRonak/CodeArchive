#include <bits/stdc++.h>
using namespace std;

int main()
{
  long n;
  cin>>n;
  long a[n];
  long d;
  cin>>d;
  for (long i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  for (long i = d; i < n; i++)
  {
    cout<<a[i]<<endl;
  }
  
  for(long i=0;i<d;i++)

  {
    cout<<a[i]<<endl;
  }
  
}