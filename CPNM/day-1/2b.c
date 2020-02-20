#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no:\n");
    scanf("%d",&n);
    printf("No of 100 Notes: %d\n",n/100);
    printf("No of 50 Notes: %d\n",(n%100)/50);
    printf("No of 10 Notes: %d\n",((n%100)%50)/10);
    return 0;
}