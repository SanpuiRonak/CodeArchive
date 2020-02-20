#import <stdio.h>
int *arr ()
{
    int a[]={5,4,3,2,1};
    int *ptr=a;
    return ptr;
}
void main()
{
    int *a;
    a=arr();
    for(int i=0;i<=4;i++)
    {
        printf("%d \n",*(a+i));
    }
}
