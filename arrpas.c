#include <stdio.h>
void print(int *arr)
{
    for(int i=0;i<5;i++)
    printf("%d",*(arr+i));
}
void main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=a;
    print(ptr);
}