#import  <stdio.h>
int *in (int *a)
{
    int b[5];
    for(int k=0;k<5;k++)
    {
        *(a+k)+=1;
    }
    b=a;
    return b;
}
void main()
{
    int a[5];
    for(int i=0;i<5:i++)
    {
        scanf("%d", a[i]);
    }
    int *b=in(a);
    for(int j=0;j<5:j++)
    {
         printf("%d", *(b+j));
    }
}