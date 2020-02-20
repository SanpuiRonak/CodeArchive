#include <stdio.h>
int main()
{
    printf("Enter A integer\n");
    int i;
    scanf("%d",&i);
    printf("Enter a Charcter\n");
    char c1=getchar();
    printf("Enter A String\n");
    char text1[25];
    gets(text1);
    printf("Enter a Word Followed by a letter and a Real Number");
    float f;char c2;char text2[25];
    scanf("%s %c %f",text2, &c2, &f);
    printf("Your input in reverse order is \n %f \n %c \n %s\n", f, c2, text2 );
    puts(text1);printf("\n");
    putchar(c1);
    printf("Too lazy to get the first one sorry");
    return 0;
}