#import <stdio.h>
void main()
{
   printf("even(e) or odd(o)");
   int *a;
   switch (scanf("%c")) 
   {
       case 'e':
       {
           a=even();
           break;
       }
       case 'o':
       {
           a=odd();
           break;
       }    
   }
}
int * even()
{
    int n[5]={2,4,6,8,10};
    return (n) ; 
}
int * odd()
{
    int n[5]={1,3,5,7,9};
    return (n);
}