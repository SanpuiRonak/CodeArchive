#import <stdio.h>
int main()
{
    int  a[5]={0,1,2,3,4};
    int *p = NULL;
    p=a;
    printf("%d", ++*(p+4));
    return 0;
}