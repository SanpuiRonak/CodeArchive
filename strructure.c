#import <stdio.h>
void main()
{
    typedef struct
    {
        int roll;
        char name[20];
    }student;
    student s1={12, "ayush"};
    struct human
    {
        int age;
        char name[20];
    };
    struct human h1={18,"ayush"};
    printf("student &d &s \n human &d &s ", s1.roll,s1.name,h1.age,h1.name );
}