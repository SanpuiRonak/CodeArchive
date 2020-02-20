#include <stdio.h>

int main()
{
    printf("Enter two numbers:\n");
    int a,sum=0;
    scanf("%d",&a);
    for(int i=a;i!=0;i/=10)
    {
        sum+=(i%10);
    }
    printf("\nSum is: %d",sum);
}