#include <stdio.h>
void main()
{
    int x,y,temp;
    scanf("%d %d",&x, &y);
    temp=x;
    x=y;
    y=temp;
    printf("\n %d %d",x,y);
}