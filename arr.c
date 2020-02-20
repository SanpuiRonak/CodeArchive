#include <stdio.h>
void print(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
}

int* gen(const int n)
{
    static int a[200];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%101;
    }

    return a;
}

int main()
{
    print(gen(200),200);
    return 0;
}