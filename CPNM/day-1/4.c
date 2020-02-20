#include <stdio.h>

int main()
{
    int n;
    printf("Enter basic Salary:\n");
    scanf("%d",&n);
    printf("Gross Salary is: %f\n",(n+0.6*n+0.15*n));
    return 0;
}