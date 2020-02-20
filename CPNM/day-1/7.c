#include <stdio.h>

int arm(int n)
{
    int sum=0;
    for(int i=n;i!=0;i/=10)
    {
        sum+=(i%10)*(i%10)*(i%10);
    }
    return sum==n;
}
int main()
{
    for(int i=1;i<=500;i++)
    {

        if(arm(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}