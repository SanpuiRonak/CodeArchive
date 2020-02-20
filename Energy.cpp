#include <iostream>
using namespace std;
int main()
{
    int meng=0,eng=0;
    int a[]={4, -10, 4, 4, 4};
    for(int i=0;i<5;i++)
    {
        eng+=a[i];
        if(eng<meng)
        meng=eng;
    }
    if(meng>=0)
    cout<<"1";
    else
    cout<<(-(--meng));
    return 0;
}