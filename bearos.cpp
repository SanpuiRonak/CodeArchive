#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,ns="";
    cin>>s;
    // int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='/'&&s[i+1]!='/')
        {
            ns+='/';

        }
        else if(s[i]!='/')
        {
            ns+=s[i];
        }
    }
    cout<<ns;
    return 0;
}