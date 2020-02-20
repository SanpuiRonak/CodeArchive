#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map <int,char> x;
    for(int i=0;i<5;i++)
    {
        char n;
        cin>>n;
        x[i]=n;
    }
    for(int i=4;i>=0;i--)
    {
        cout<<x[i];
    }

}