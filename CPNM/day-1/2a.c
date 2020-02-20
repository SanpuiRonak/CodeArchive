#include <stdio.h>

int main()
{
    printf("Enter a no:\n");
    int a=0;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
