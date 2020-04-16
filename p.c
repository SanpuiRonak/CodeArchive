#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double D,GR,SR;
    D = (b*b) - (4*a*c);
    D = sqrt(D);
    GR = (-b + D)/(2*a);
    SR = (-b - D)/(2*a);
    printf("%lf\n%lf",GR,SR);
    return 0;
}