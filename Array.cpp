#include <iostream>
using namespace std;
int *p;
void genA();
void printA();
int main()
{
    genA();
    printA();
    return 0;
}

void genA()
{
    int a[]={1,2,3,4,5};
    p=a;
}

void printA()
{
    for(int i=0;i<=4;i++)
    cout<<*(p+i);
}