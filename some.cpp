    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        long n;
        cin>>n;
        int a[n],p[n];
        for(long i=0;i<n;i++)
        {
            cin>>a[i]>>p[i];   
        }
     
        int min=*min_element(p,p+n);
        long x =std::distance(p, std::find(p, p+n, min));
        long sum=0;
        for(long i=0;i<x;i++)
        {
            sum+=a[i]*p[i];
        }
        for(long i=x;i<n;i++)
        {
            sum+=a[i]*min;
        }
     
        cout<<sum;
        return 0;
    }