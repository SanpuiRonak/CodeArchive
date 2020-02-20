#include <bits/stdc++.h> 
using namespace std;

int freq(int a[]);
int main()
{
    int a[5]={0,1,1,2,3};
    cout<<freq(a);
}

int freq(int a[])
{
    unordered_map <int,int> m;int max;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        if(m.find(i)!=m.end())
        {
        m[i]++;
        continue;
        }
        m.insert({i,0});
    }
    return max_element(m.begin(),m.end());

}