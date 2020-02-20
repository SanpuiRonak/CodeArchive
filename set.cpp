#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> s;
    for(int j=0;j<5;j++)
    {
        int i;
        cin>>i;
        s.insert(i);
    }
    cout<<"------------------"<<endl;
    cout<<*(s.find(2))<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }
}